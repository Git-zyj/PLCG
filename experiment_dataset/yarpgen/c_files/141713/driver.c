#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
short var_4 = (short)-20452;
unsigned char var_8 = (unsigned char)163;
unsigned char var_9 = (unsigned char)130;
unsigned char var_11 = (unsigned char)5;
int zero = 0;
short var_14 = (short)10387;
unsigned char var_15 = (unsigned char)73;
short var_16 = (short)-11389;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
