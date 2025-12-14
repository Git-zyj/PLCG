#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29359;
unsigned short var_1 = (unsigned short)62320;
unsigned char var_2 = (unsigned char)42;
unsigned char var_5 = (unsigned char)73;
long long int var_7 = -4415152009727315073LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_12 = 7134624457778685546LL;
int var_13 = -1609029407;
long long int var_14 = -997819249784478543LL;
unsigned int var_15 = 4051596644U;
unsigned short var_16 = (unsigned short)53245;
_Bool arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
