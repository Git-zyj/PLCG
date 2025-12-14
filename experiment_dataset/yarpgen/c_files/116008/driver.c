#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)63245;
unsigned char var_6 = (unsigned char)62;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)24142;
int var_13 = -275379355;
unsigned int var_14 = 3039972777U;
unsigned int var_15 = 522170590U;
unsigned long long int var_16 = 6923676434147085315ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
