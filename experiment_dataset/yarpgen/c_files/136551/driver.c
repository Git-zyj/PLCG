#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1683526639;
long long int var_1 = -7590014271024182829LL;
unsigned short var_2 = (unsigned short)52093;
long long int var_3 = 1047389347826824204LL;
long long int var_5 = 1498385590027134561LL;
unsigned int var_8 = 2819514194U;
long long int var_9 = -8065440582350840508LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3666946606U;
unsigned int var_12 = 3404212242U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
