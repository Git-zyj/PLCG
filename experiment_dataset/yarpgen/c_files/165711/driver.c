#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1585;
unsigned char var_5 = (unsigned char)29;
signed char var_8 = (signed char)-64;
int var_9 = 1955015482;
signed char var_12 = (signed char)-41;
int zero = 0;
unsigned short var_13 = (unsigned short)55359;
signed char var_14 = (signed char)-96;
unsigned short var_15 = (unsigned short)35269;
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
