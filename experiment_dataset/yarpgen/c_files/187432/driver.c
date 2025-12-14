#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned int var_2 = 552699831U;
unsigned short var_4 = (unsigned short)51176;
signed char var_7 = (signed char)-121;
short var_9 = (short)23660;
unsigned int var_11 = 2480818012U;
int var_12 = 1469962197;
int zero = 0;
long long int var_13 = 391790109987606265LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11645197009776254094ULL;
short var_16 = (short)22779;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
