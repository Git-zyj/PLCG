#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1950772497;
unsigned short var_1 = (unsigned short)39657;
unsigned char var_2 = (unsigned char)58;
signed char var_3 = (signed char)100;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 11258853651446580417ULL;
signed char var_13 = (signed char)-17;
long long int var_14 = 6583665558207013850LL;
int zero = 0;
unsigned short var_17 = (unsigned short)19026;
int var_18 = 1007600155;
void init() {
}

void checksum() {
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
