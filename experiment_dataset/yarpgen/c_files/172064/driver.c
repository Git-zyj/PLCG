#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7844;
int var_1 = -75517606;
unsigned long long int var_2 = 11574972725100922916ULL;
unsigned char var_3 = (unsigned char)80;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)186;
unsigned char var_6 = (unsigned char)190;
unsigned short var_7 = (unsigned short)45258;
int var_8 = -1814803050;
signed char var_9 = (signed char)-57;
short var_10 = (short)32243;
unsigned int var_11 = 1566075988U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 495098674399564915LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)176;
short var_19 = (short)-14736;
unsigned long long int var_20 = 95275294254298373ULL;
signed char var_21 = (signed char)51;
unsigned long long int var_22 = 17230158565023672180ULL;
long long int var_23 = -2396561237021818660LL;
signed char var_24 = (signed char)-23;
unsigned short var_25 = (unsigned short)19989;
long long int arr_8 [14] [14] [14] ;
short arr_12 [16] ;
long long int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7303706034854859077LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)22028 : (short)31417;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -5117951738972463960LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
