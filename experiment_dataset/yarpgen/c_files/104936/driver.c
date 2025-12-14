#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8743474951812299934LL;
signed char var_3 = (signed char)-8;
unsigned char var_7 = (unsigned char)11;
short var_10 = (short)-9370;
short var_11 = (short)18702;
int zero = 0;
unsigned short var_15 = (unsigned short)24455;
short var_16 = (short)-26866;
signed char var_17 = (signed char)101;
signed char var_18 = (signed char)96;
unsigned long long int var_19 = 3312345122488133314ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
