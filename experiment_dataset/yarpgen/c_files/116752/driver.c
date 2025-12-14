#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4849895231706283946ULL;
short var_1 = (short)-31853;
_Bool var_4 = (_Bool)0;
long long int var_7 = 2075572226631694692LL;
int var_8 = -56956662;
unsigned long long int var_11 = 17338716381991111269ULL;
unsigned int var_12 = 3479002601U;
short var_13 = (short)-10594;
_Bool var_15 = (_Bool)0;
short var_16 = (short)28133;
int zero = 0;
int var_19 = 604210259;
unsigned int var_20 = 4005770809U;
unsigned char var_21 = (unsigned char)175;
unsigned char var_22 = (unsigned char)119;
unsigned int var_23 = 2783991087U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
