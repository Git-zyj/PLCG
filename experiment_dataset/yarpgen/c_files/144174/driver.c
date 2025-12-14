#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
long long int var_1 = -2606150524054877201LL;
signed char var_3 = (signed char)-4;
short var_4 = (short)-7722;
unsigned char var_5 = (unsigned char)204;
long long int var_6 = -686613314491228035LL;
unsigned short var_8 = (unsigned short)35952;
signed char var_10 = (signed char)-111;
short var_14 = (short)-18840;
long long int var_15 = -7242946686453618064LL;
unsigned char var_16 = (unsigned char)178;
long long int var_17 = 4098364315485500456LL;
int zero = 0;
signed char var_20 = (signed char)-64;
long long int var_21 = -1050023589852751851LL;
unsigned long long int var_22 = 1487229669036193891ULL;
_Bool var_23 = (_Bool)1;
long long int var_24 = 544663539275193022LL;
unsigned short var_25 = (unsigned short)62533;
short var_26 = (short)-21469;
unsigned char var_27 = (unsigned char)161;
unsigned long long int arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 146905969621088351ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
