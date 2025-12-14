#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2412741610899344412LL;
long long int var_10 = 1104357013460005185LL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1943612010U;
unsigned char var_15 = (unsigned char)140;
int zero = 0;
unsigned int var_17 = 4217854395U;
signed char var_18 = (signed char)91;
long long int var_19 = -4788343619122225356LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
