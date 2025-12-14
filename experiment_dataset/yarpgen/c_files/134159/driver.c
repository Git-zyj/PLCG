#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned char var_1 = (unsigned char)152;
short var_10 = (short)-28158;
unsigned short var_16 = (unsigned short)54988;
int zero = 0;
int var_20 = 1596590781;
unsigned long long int var_21 = 16566770679552879641ULL;
long long int var_22 = -3928238037672054937LL;
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
