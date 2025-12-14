#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37890;
unsigned long long int var_4 = 1614340257262313085ULL;
unsigned long long int var_14 = 14244899242701229304ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)21360;
unsigned int var_21 = 320135140U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
