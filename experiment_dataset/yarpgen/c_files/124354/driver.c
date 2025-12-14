#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3817165422U;
unsigned short var_5 = (unsigned short)54542;
unsigned int var_7 = 1201171021U;
unsigned short var_10 = (unsigned short)18055;
int zero = 0;
unsigned int var_14 = 3731003208U;
unsigned char var_15 = (unsigned char)184;
unsigned short var_16 = (unsigned short)9535;
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
