#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1858939531U;
signed char var_4 = (signed char)-41;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -327600339234049868LL;
signed char var_17 = (signed char)8;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
