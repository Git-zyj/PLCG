#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = 903231162;
short var_5 = (short)-14949;
int var_9 = 1938766887;
long long int var_10 = -4817389983035157049LL;
unsigned char var_17 = (unsigned char)253;
int zero = 0;
int var_19 = 1126586071;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3619356879U;
unsigned short var_22 = (unsigned short)37040;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)217;
_Bool var_25 = (_Bool)0;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -1338827067;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
