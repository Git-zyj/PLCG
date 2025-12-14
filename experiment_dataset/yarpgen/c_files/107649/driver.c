#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
_Bool var_2 = (_Bool)1;
int var_3 = 1609528811;
unsigned long long int var_4 = 153775135502605140ULL;
unsigned char var_5 = (unsigned char)32;
unsigned long long int var_6 = 42180307432894772ULL;
unsigned long long int var_7 = 13765742389605288784ULL;
signed char var_8 = (signed char)35;
int zero = 0;
int var_10 = -2140642762;
unsigned long long int var_11 = 9986490912350084641ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
