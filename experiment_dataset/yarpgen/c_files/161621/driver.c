#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 135206505;
unsigned int var_1 = 465722574U;
long long int var_3 = 3502130530718996179LL;
short var_6 = (short)23754;
unsigned short var_8 = (unsigned short)35931;
unsigned int var_9 = 431413024U;
signed char var_10 = (signed char)112;
unsigned char var_11 = (unsigned char)196;
int zero = 0;
long long int var_13 = 3741123711273089009LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)2303;
_Bool var_16 = (_Bool)0;
short var_17 = (short)23271;
void init() {
}

void checksum() {
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
