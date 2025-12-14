#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53337;
long long int var_4 = -2167684856795660063LL;
unsigned int var_5 = 451209906U;
unsigned short var_6 = (unsigned short)23188;
long long int var_8 = -7907828290115641407LL;
int var_10 = 1146422151;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)23447;
long long int var_16 = -4074186561613203562LL;
unsigned int var_19 = 4113989982U;
int zero = 0;
unsigned int var_20 = 2002922097U;
unsigned short var_21 = (unsigned short)21916;
unsigned int var_22 = 189082650U;
unsigned char var_23 = (unsigned char)208;
unsigned char var_24 = (unsigned char)164;
unsigned char var_25 = (unsigned char)22;
long long int var_26 = 6296471418172481398LL;
unsigned int var_27 = 1682090910U;
signed char var_28 = (signed char)-25;
long long int var_29 = -5296640635547815190LL;
long long int arr_0 [18] ;
unsigned int arr_1 [18] ;
signed char arr_2 [19] ;
unsigned int arr_3 [19] [19] ;
int arr_4 [19] ;
unsigned int arr_5 [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -9119416512476847554LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1790981149U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1412389405U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -927184392;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3268552922U : 703839486U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)49 : (signed char)(-127 - 1);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
