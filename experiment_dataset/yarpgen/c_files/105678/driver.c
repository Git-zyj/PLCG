#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
long long int var_3 = 8126707638837013703LL;
_Bool var_4 = (_Bool)1;
int var_6 = 503521872;
unsigned short var_8 = (unsigned short)40912;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-16055;
long long int var_13 = -6833864741899905295LL;
unsigned short var_15 = (unsigned short)12574;
unsigned short var_17 = (unsigned short)15187;
short var_19 = (short)24639;
int zero = 0;
int var_20 = 1898932616;
unsigned char var_21 = (unsigned char)105;
int var_22 = 1199480477;
long long int var_23 = -1295092318779558288LL;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-9099;
int arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -994077261;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
