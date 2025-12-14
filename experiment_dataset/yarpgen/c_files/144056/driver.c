#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1849076314;
unsigned char var_2 = (unsigned char)188;
int var_7 = -17688349;
int var_8 = 985329866;
signed char var_10 = (signed char)-14;
unsigned int var_12 = 4221056256U;
int zero = 0;
signed char var_13 = (signed char)-65;
int var_14 = -1397816174;
void init() {
}

void checksum() {
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
