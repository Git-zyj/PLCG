#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7754;
unsigned char var_1 = (unsigned char)43;
unsigned short var_2 = (unsigned short)39643;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)129;
unsigned short var_7 = (unsigned short)10011;
unsigned long long int var_8 = 3111993955355311123ULL;
unsigned long long int var_10 = 15287252830217721656ULL;
unsigned long long int var_11 = 15050850314822104603ULL;
int zero = 0;
long long int var_12 = 6796734784242486555LL;
unsigned short var_13 = (unsigned short)58005;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
