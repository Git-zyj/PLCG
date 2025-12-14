#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-15786;
unsigned char var_10 = (unsigned char)22;
short var_12 = (short)32358;
int zero = 0;
unsigned int var_19 = 765997194U;
unsigned char var_20 = (unsigned char)187;
int var_21 = 962675467;
int var_22 = 1078492456;
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
