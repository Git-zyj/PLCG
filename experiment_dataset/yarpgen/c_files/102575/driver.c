#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2130020122;
unsigned int var_4 = 2412291668U;
signed char var_6 = (signed char)-12;
unsigned long long int var_7 = 15275240066087545215ULL;
int var_8 = 372872211;
unsigned long long int var_10 = 10976824143387054201ULL;
int zero = 0;
int var_12 = -1713128179;
short var_13 = (short)10779;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
