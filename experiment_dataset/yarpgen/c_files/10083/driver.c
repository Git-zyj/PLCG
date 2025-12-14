#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58143;
short var_2 = (short)28917;
signed char var_3 = (signed char)93;
int var_5 = 3913863;
long long int var_10 = -7229781947832145080LL;
unsigned char var_13 = (unsigned char)241;
unsigned long long int var_14 = 9289274912598048116ULL;
int var_16 = -1070495719;
int zero = 0;
unsigned long long int var_17 = 1365648362960994972ULL;
unsigned long long int var_18 = 6297681815384006136ULL;
unsigned short var_19 = (unsigned short)20221;
void init() {
}

void checksum() {
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
