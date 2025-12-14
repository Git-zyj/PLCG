#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_4 = -1259478916;
signed char var_6 = (signed char)-88;
unsigned short var_7 = (unsigned short)53988;
long long int var_9 = 2466533003634317089LL;
signed char var_11 = (signed char)24;
short var_13 = (short)-32488;
int zero = 0;
unsigned char var_16 = (unsigned char)244;
short var_17 = (short)-22348;
unsigned char var_18 = (unsigned char)224;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
