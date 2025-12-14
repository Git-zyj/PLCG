#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2832173094U;
unsigned short var_3 = (unsigned short)54626;
signed char var_4 = (signed char)99;
unsigned short var_5 = (unsigned short)54228;
unsigned short var_10 = (unsigned short)9796;
unsigned char var_11 = (unsigned char)59;
unsigned short var_12 = (unsigned short)48425;
unsigned short var_14 = (unsigned short)18671;
int zero = 0;
unsigned short var_16 = (unsigned short)40974;
int var_17 = 328729523;
unsigned short var_18 = (unsigned short)41164;
void init() {
}

void checksum() {
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
