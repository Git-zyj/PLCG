#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37221;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-99;
_Bool var_10 = (_Bool)0;
int var_11 = 1124813502;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
int var_15 = 1934435587;
unsigned long long int var_16 = 15393750524330859549ULL;
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
