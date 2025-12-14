#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 337279624;
unsigned short var_8 = (unsigned short)63746;
signed char var_11 = (signed char)-26;
int var_12 = 1740132974;
int zero = 0;
signed char var_13 = (signed char)13;
unsigned char var_14 = (unsigned char)186;
unsigned short var_15 = (unsigned short)30169;
void init() {
}

void checksum() {
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
