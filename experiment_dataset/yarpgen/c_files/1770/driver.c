#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13803;
int var_7 = 1017091206;
unsigned char var_10 = (unsigned char)143;
int zero = 0;
unsigned long long int var_19 = 11459385007423427958ULL;
int var_20 = 1943536435;
unsigned int var_21 = 2651049623U;
signed char var_22 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
