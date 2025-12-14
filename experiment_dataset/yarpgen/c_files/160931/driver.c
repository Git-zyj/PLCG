#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 37128205;
unsigned char var_3 = (unsigned char)28;
unsigned char var_4 = (unsigned char)12;
unsigned long long int var_13 = 9031988834428130843ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned short var_19 = (unsigned short)43872;
int zero = 0;
unsigned long long int var_20 = 1191422390313286960ULL;
short var_21 = (short)-25396;
unsigned short var_22 = (unsigned short)54077;
short var_23 = (short)22800;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
