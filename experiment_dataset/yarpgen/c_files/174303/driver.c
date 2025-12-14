#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 961810694;
unsigned char var_2 = (unsigned char)88;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-17396;
unsigned char var_5 = (unsigned char)14;
unsigned char var_6 = (unsigned char)102;
long long int var_7 = 2965004471760080429LL;
unsigned int var_8 = 1714157835U;
unsigned char var_9 = (unsigned char)20;
int zero = 0;
int var_10 = -750695990;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
