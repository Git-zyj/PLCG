#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47660;
unsigned short var_2 = (unsigned short)44162;
long long int var_5 = 3493957697937931194LL;
long long int var_7 = -5383474823890323158LL;
int zero = 0;
unsigned int var_11 = 3996323328U;
short var_12 = (short)-18567;
unsigned short var_13 = (unsigned short)37154;
short var_14 = (short)1037;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
