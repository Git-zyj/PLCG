#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1601110015;
unsigned long long int var_3 = 5285608913107388592ULL;
_Bool var_4 = (_Bool)1;
int var_5 = 470365336;
long long int var_6 = 760349582060397937LL;
long long int var_7 = 2873780814735268981LL;
short var_8 = (short)-28151;
unsigned long long int var_10 = 3688219568553878954ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 15348437222275873744ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 527604971389651897LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
