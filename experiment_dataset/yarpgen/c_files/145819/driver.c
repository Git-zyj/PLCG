#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2025138345;
signed char var_7 = (signed char)-89;
unsigned char var_10 = (unsigned char)35;
short var_11 = (short)-12296;
short var_12 = (short)-25445;
unsigned int var_14 = 3681152638U;
int zero = 0;
long long int var_20 = 6675772827436835080LL;
unsigned long long int var_21 = 8020925168355229981ULL;
int var_22 = -1538872639;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
