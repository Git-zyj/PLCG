#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8855110215340503547LL;
int var_1 = 117915570;
short var_2 = (short)15130;
unsigned short var_3 = (unsigned short)2261;
int var_5 = 1666921611;
long long int var_6 = 5052066274996401052LL;
short var_7 = (short)-26885;
long long int var_8 = 8154249280411149085LL;
short var_9 = (short)19185;
unsigned int var_10 = 3279782732U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)40219;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6655023678337690884ULL;
short var_15 = (short)28951;
unsigned char var_16 = (unsigned char)149;
int var_17 = 1905951373;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
