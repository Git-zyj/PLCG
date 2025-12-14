#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -495399293;
unsigned char var_7 = (unsigned char)73;
int var_8 = 427931047;
unsigned char var_10 = (unsigned char)43;
int var_11 = -596551487;
int zero = 0;
int var_12 = -1496349176;
int var_13 = -143521043;
int var_14 = -1241488034;
int var_15 = 1107669962;
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
