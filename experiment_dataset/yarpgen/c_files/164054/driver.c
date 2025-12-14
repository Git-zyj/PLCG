#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
signed char var_9 = (signed char)-40;
int zero = 0;
unsigned char var_12 = (unsigned char)192;
unsigned short var_13 = (unsigned short)48372;
signed char var_14 = (signed char)4;
signed char var_15 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
