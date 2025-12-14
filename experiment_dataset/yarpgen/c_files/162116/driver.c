#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
unsigned char var_3 = (unsigned char)190;
unsigned char var_14 = (unsigned char)203;
int zero = 0;
signed char var_17 = (signed char)-7;
signed char var_18 = (signed char)-91;
unsigned int var_19 = 478908596U;
void init() {
}

void checksum() {
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
