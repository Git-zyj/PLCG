#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 548676975;
unsigned int var_2 = 144000861U;
_Bool var_5 = (_Bool)0;
short var_9 = (short)-7191;
_Bool var_11 = (_Bool)0;
int var_13 = 2079057058;
int var_15 = -182277737;
unsigned char var_16 = (unsigned char)239;
unsigned int var_17 = 2151841337U;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
unsigned int var_19 = 2976820573U;
unsigned int var_20 = 348701052U;
unsigned char var_21 = (unsigned char)75;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
