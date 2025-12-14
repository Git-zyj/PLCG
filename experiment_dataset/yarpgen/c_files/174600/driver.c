#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)52;
int var_7 = 1217833795;
unsigned short var_8 = (unsigned short)8493;
int var_10 = -2025525435;
int zero = 0;
int var_11 = 2096511984;
long long int var_12 = -4144833920498379005LL;
unsigned char var_13 = (unsigned char)163;
int var_14 = 330033713;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
