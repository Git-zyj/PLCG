#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)2;
unsigned long long int var_3 = 3808654943311768160ULL;
short var_4 = (short)-22507;
unsigned short var_6 = (unsigned short)61916;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)23756;
int zero = 0;
unsigned int var_14 = 917009490U;
unsigned char var_15 = (unsigned char)185;
unsigned short var_16 = (unsigned short)54330;
long long int var_17 = -27337513275946807LL;
int var_18 = -1181618887;
unsigned long long int var_19 = 4084039121547704016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
