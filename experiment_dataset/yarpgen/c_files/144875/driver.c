#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63204;
long long int var_4 = -6867680476373476526LL;
unsigned long long int var_5 = 13160953199856365994ULL;
unsigned int var_6 = 2131806150U;
long long int var_7 = -4354671382811996091LL;
_Bool var_12 = (_Bool)0;
int var_13 = 1135897045;
int zero = 0;
int var_14 = 190794884;
unsigned short var_15 = (unsigned short)30340;
int var_16 = 771597784;
void init() {
}

void checksum() {
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
