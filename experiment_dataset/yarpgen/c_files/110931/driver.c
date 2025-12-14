#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)184;
int var_9 = -2036232019;
unsigned int var_10 = 2657220456U;
unsigned char var_11 = (unsigned char)141;
unsigned int var_12 = 106992544U;
int var_18 = -1560670961;
int zero = 0;
unsigned long long int var_20 = 18211140275229755916ULL;
unsigned char var_21 = (unsigned char)52;
signed char var_22 = (signed char)-98;
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
