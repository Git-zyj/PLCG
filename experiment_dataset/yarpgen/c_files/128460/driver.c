#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56230;
unsigned int var_1 = 2841459119U;
unsigned int var_8 = 3332913569U;
unsigned long long int var_19 = 3547174620918948728ULL;
int zero = 0;
short var_20 = (short)21729;
short var_21 = (short)7596;
_Bool var_22 = (_Bool)0;
int var_23 = -872171189;
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
