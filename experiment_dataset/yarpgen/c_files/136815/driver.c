#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18221;
unsigned char var_6 = (unsigned char)43;
unsigned int var_15 = 4281823430U;
int zero = 0;
unsigned int var_16 = 555119787U;
unsigned long long int var_17 = 15048345696607592443ULL;
int var_18 = -547517395;
unsigned int var_19 = 900580395U;
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
