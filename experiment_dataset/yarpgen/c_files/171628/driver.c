#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27248;
unsigned char var_6 = (unsigned char)199;
unsigned char var_16 = (unsigned char)176;
int zero = 0;
unsigned short var_17 = (unsigned short)48972;
unsigned int var_18 = 3727482590U;
unsigned short var_19 = (unsigned short)12027;
int var_20 = -784775622;
signed char var_21 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
