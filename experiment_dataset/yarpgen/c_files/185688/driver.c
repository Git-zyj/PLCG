#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 783872470;
int var_8 = -1839725188;
unsigned int var_11 = 82536906U;
int zero = 0;
signed char var_16 = (signed char)-9;
unsigned char var_17 = (unsigned char)122;
unsigned int var_18 = 1369698484U;
int var_19 = -236171421;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
