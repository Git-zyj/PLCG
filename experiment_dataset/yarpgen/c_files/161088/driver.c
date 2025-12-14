#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21346;
unsigned char var_2 = (unsigned char)8;
short var_3 = (short)-7312;
signed char var_4 = (signed char)-123;
long long int var_5 = -5013178042321732189LL;
short var_6 = (short)6865;
long long int var_7 = -1119092297461586385LL;
long long int var_10 = -205702656845280211LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 202446156;
int var_13 = 1527054489;
unsigned long long int var_14 = 7455757559745470220ULL;
unsigned long long int var_15 = 5477632600237421820ULL;
unsigned short var_16 = (unsigned short)26101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
