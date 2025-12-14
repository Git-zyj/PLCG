#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)130;
int var_2 = -1138768029;
int var_10 = -1984934892;
int var_13 = 228967840;
int zero = 0;
int var_20 = 1517990682;
unsigned char var_21 = (unsigned char)28;
unsigned char var_22 = (unsigned char)91;
int var_23 = -34575625;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
