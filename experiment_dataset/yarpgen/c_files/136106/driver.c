#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
long long int var_2 = -8223301957707234579LL;
short var_10 = (short)-15059;
unsigned char var_12 = (unsigned char)22;
unsigned int var_13 = 2156671286U;
int zero = 0;
unsigned long long int var_16 = 14014410412866833624ULL;
int var_17 = 2081667427;
unsigned long long int var_18 = 4136844052515557890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
