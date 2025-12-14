#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)250;
unsigned char var_8 = (unsigned char)225;
unsigned char var_9 = (unsigned char)27;
short var_11 = (short)-2622;
int zero = 0;
int var_12 = 592285713;
signed char var_13 = (signed char)56;
void init() {
}

void checksum() {
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
