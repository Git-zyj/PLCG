#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21705;
unsigned char var_3 = (unsigned char)152;
unsigned short var_8 = (unsigned short)23755;
unsigned char var_14 = (unsigned char)254;
int zero = 0;
int var_15 = -541688503;
int var_16 = 157948973;
void init() {
}

void checksum() {
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
