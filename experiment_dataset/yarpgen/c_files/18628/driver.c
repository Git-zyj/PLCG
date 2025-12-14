#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1159798583;
unsigned int var_1 = 1124095468U;
short var_4 = (short)30570;
unsigned short var_8 = (unsigned short)34746;
short var_13 = (short)-19683;
signed char var_19 = (signed char)-9;
int zero = 0;
unsigned short var_20 = (unsigned short)29558;
short var_21 = (short)21789;
unsigned long long int var_22 = 17725459326248824875ULL;
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
