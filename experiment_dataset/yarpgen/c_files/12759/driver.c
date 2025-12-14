#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5955855466485928755LL;
long long int var_1 = 8711974293037572614LL;
unsigned int var_2 = 375181690U;
int var_4 = 931301772;
unsigned long long int var_7 = 15995840457501519744ULL;
unsigned short var_10 = (unsigned short)59227;
short var_14 = (short)-29037;
unsigned char var_15 = (unsigned char)231;
unsigned int var_18 = 916054573U;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)1943;
short var_21 = (short)-11973;
unsigned short var_22 = (unsigned short)63167;
short var_23 = (short)14576;
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
