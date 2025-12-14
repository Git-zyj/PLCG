#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8225;
short var_6 = (short)-17541;
unsigned long long int var_7 = 11809045577502171854ULL;
int var_8 = -1196405256;
signed char var_11 = (signed char)87;
int zero = 0;
short var_14 = (short)-5680;
unsigned long long int var_15 = 16531555901158101712ULL;
unsigned short var_16 = (unsigned short)13002;
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
