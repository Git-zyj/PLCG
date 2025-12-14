#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 827257513;
int var_3 = 1428543173;
signed char var_5 = (signed char)36;
unsigned long long int var_7 = 2112463695327772154ULL;
short var_8 = (short)-19460;
unsigned short var_11 = (unsigned short)54009;
unsigned long long int var_12 = 1937201412201490689ULL;
int zero = 0;
short var_15 = (short)28726;
int var_16 = -1182127504;
signed char var_17 = (signed char)-2;
signed char var_18 = (signed char)-59;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
