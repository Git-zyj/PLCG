#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)43;
unsigned char var_5 = (unsigned char)126;
signed char var_6 = (signed char)64;
int var_8 = -106913694;
unsigned char var_10 = (unsigned char)14;
int zero = 0;
signed char var_11 = (signed char)-87;
unsigned int var_12 = 2895124695U;
signed char var_13 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
