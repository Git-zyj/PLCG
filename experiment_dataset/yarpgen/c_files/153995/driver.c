#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)-13471;
unsigned char var_6 = (unsigned char)127;
unsigned short var_10 = (unsigned short)30564;
signed char var_12 = (signed char)-14;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -120103634;
unsigned char var_21 = (unsigned char)96;
unsigned char var_22 = (unsigned char)40;
unsigned long long int var_23 = 8458483050856057640ULL;
unsigned short var_24 = (unsigned short)36178;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
