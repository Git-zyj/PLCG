#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)132;
unsigned char var_5 = (unsigned char)70;
signed char var_11 = (signed char)-10;
int zero = 0;
unsigned char var_12 = (unsigned char)253;
signed char var_13 = (signed char)81;
unsigned char var_14 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
