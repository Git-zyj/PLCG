#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28857;
int var_3 = 1032007428;
signed char var_9 = (signed char)25;
unsigned int var_10 = 625066974U;
int var_11 = 1234652683;
int var_13 = 1108183782;
unsigned int var_16 = 4161326843U;
int zero = 0;
unsigned char var_18 = (unsigned char)187;
signed char var_19 = (signed char)-3;
signed char var_20 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
