#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14821;
unsigned char var_2 = (unsigned char)179;
unsigned short var_3 = (unsigned short)54968;
signed char var_6 = (signed char)69;
signed char var_7 = (signed char)73;
int zero = 0;
signed char var_10 = (signed char)-68;
unsigned int var_11 = 294087485U;
unsigned char var_12 = (unsigned char)229;
long long int var_13 = -6718868722427546183LL;
unsigned long long int var_14 = 5562918067863325602ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
