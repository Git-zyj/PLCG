#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 530878526U;
unsigned short var_2 = (unsigned short)31332;
int var_3 = 611798850;
unsigned char var_4 = (unsigned char)131;
int var_5 = 25249196;
unsigned char var_11 = (unsigned char)36;
long long int var_17 = -165456418895828473LL;
int zero = 0;
short var_18 = (short)17322;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7907144459851002663ULL;
long long int var_21 = -811227948477351665LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
