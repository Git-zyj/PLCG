#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
unsigned short var_12 = (unsigned short)28844;
unsigned char var_14 = (unsigned char)122;
int zero = 0;
unsigned int var_20 = 752390873U;
unsigned char var_21 = (unsigned char)28;
unsigned char var_22 = (unsigned char)97;
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
