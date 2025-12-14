#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23284;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3660715812U;
unsigned char var_5 = (unsigned char)9;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 11688040505871409663ULL;
short var_8 = (short)-26024;
long long int var_9 = 6124106924337517857LL;
int zero = 0;
unsigned char var_10 = (unsigned char)32;
unsigned short var_11 = (unsigned short)41518;
unsigned int var_12 = 4145363933U;
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
