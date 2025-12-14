#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -782086990;
int var_4 = 381749878;
unsigned char var_7 = (unsigned char)52;
unsigned int var_10 = 3779297315U;
int var_14 = 1338934980;
int zero = 0;
unsigned short var_15 = (unsigned short)11664;
unsigned int var_16 = 3422525787U;
void init() {
}

void checksum() {
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
