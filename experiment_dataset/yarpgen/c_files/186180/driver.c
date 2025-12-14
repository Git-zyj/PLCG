#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)245;
int var_4 = -318060776;
unsigned int var_8 = 2801011645U;
int zero = 0;
signed char var_12 = (signed char)-36;
long long int var_13 = 4856653344434461292LL;
unsigned short var_14 = (unsigned short)12657;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
