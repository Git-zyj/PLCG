#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3377255876U;
unsigned int var_10 = 861492706U;
short var_12 = (short)-12480;
unsigned int var_14 = 2708887701U;
unsigned long long int var_18 = 1355602543944526013ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)222;
signed char var_21 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
