#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)30;
short var_2 = (short)7419;
unsigned char var_3 = (unsigned char)203;
unsigned short var_5 = (unsigned short)10628;
int var_6 = -1882138697;
unsigned int var_7 = 3474380914U;
unsigned char var_8 = (unsigned char)253;
signed char var_9 = (signed char)21;
unsigned long long int var_10 = 2308799422196020177ULL;
unsigned char var_11 = (unsigned char)111;
short var_12 = (short)-20355;
unsigned long long int var_13 = 17498759280811173638ULL;
unsigned short var_14 = (unsigned short)16546;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)55453;
short var_17 = (short)-32028;
unsigned char var_18 = (unsigned char)61;
int zero = 0;
long long int var_19 = 6015805108834526661LL;
unsigned long long int var_20 = 9697399312840257280ULL;
unsigned char var_21 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
