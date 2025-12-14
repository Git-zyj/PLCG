#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-90;
unsigned short var_2 = (unsigned short)10318;
unsigned short var_3 = (unsigned short)41354;
unsigned short var_5 = (unsigned short)35799;
long long int var_7 = -2435515229424613852LL;
int zero = 0;
long long int var_10 = 7053583831012041138LL;
unsigned short var_11 = (unsigned short)9039;
unsigned short var_12 = (unsigned short)3405;
unsigned long long int var_13 = 15856160366703614556ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
