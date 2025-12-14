#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1434526792;
unsigned long long int var_3 = 8359815741802782969ULL;
long long int var_4 = 434097881247848826LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3012929619U;
long long int var_7 = -6783189317938413167LL;
unsigned char var_8 = (unsigned char)230;
unsigned short var_10 = (unsigned short)15389;
int zero = 0;
unsigned char var_11 = (unsigned char)190;
signed char var_12 = (signed char)-11;
signed char var_13 = (signed char)69;
void init() {
}

void checksum() {
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
