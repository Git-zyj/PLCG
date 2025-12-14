#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1988247646U;
unsigned int var_4 = 3139556545U;
unsigned long long int var_5 = 15095901324542522744ULL;
int var_7 = 827619347;
signed char var_10 = (signed char)-44;
unsigned int var_11 = 822041391U;
int zero = 0;
unsigned char var_13 = (unsigned char)144;
unsigned short var_14 = (unsigned short)20359;
short var_15 = (short)405;
unsigned int var_16 = 2272597984U;
signed char var_17 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
