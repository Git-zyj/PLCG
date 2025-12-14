#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2149846566753819206LL;
unsigned char var_1 = (unsigned char)210;
short var_2 = (short)-10785;
long long int var_3 = -9154913148050913368LL;
unsigned long long int var_4 = 2080602029495938616ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)118;
long long int var_9 = -483794184498851322LL;
unsigned short var_10 = (unsigned short)2113;
long long int var_11 = -2039847330540960872LL;
int zero = 0;
signed char var_12 = (signed char)-112;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6123575711430509123ULL;
signed char var_15 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
