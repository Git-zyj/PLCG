#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1611124002U;
unsigned int var_6 = 1470645406U;
unsigned int var_8 = 2879321105U;
unsigned int var_13 = 3397691047U;
int var_14 = 281995928;
int zero = 0;
unsigned char var_15 = (unsigned char)156;
unsigned char var_16 = (unsigned char)156;
unsigned int var_17 = 2787980531U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
