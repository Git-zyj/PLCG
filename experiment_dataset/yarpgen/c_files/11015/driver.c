#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23403;
unsigned short var_1 = (unsigned short)5216;
unsigned long long int var_3 = 236752954002814629ULL;
signed char var_4 = (signed char)-34;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)-34;
short var_9 = (short)10932;
int zero = 0;
long long int var_10 = -6543566374962225031LL;
unsigned short var_11 = (unsigned short)9083;
signed char var_12 = (signed char)-110;
unsigned char var_13 = (unsigned char)74;
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
