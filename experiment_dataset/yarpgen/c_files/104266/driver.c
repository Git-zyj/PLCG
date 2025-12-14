#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16424657689682915766ULL;
long long int var_4 = 7670948045975412118LL;
unsigned short var_5 = (unsigned short)61933;
unsigned int var_9 = 2164786469U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)163;
unsigned char var_13 = (unsigned char)90;
_Bool var_14 = (_Bool)1;
long long int var_15 = -478427713467356802LL;
unsigned long long int var_16 = 13052903896770912163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
