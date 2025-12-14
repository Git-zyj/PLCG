#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8972093589264346364LL;
unsigned short var_5 = (unsigned short)23986;
unsigned char var_9 = (unsigned char)14;
unsigned short var_13 = (unsigned short)47475;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 2547548419476276500LL;
signed char var_22 = (signed char)-58;
signed char var_23 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
