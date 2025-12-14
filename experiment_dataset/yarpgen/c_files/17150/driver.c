#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3318216567U;
unsigned int var_7 = 1938235843U;
unsigned char var_9 = (unsigned char)203;
int zero = 0;
unsigned short var_11 = (unsigned short)8988;
signed char var_12 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
