#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61300;
long long int var_12 = -302423150801449332LL;
unsigned short var_14 = (unsigned short)23401;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)115;
long long int var_19 = 897553717283883499LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-11114;
unsigned char var_22 = (unsigned char)1;
unsigned int var_23 = 2811562403U;
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
