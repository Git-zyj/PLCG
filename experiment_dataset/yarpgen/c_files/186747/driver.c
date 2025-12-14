#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned char var_4 = (unsigned char)36;
unsigned long long int var_5 = 13781713243331043186ULL;
long long int var_6 = 3902787889476020537LL;
short var_7 = (short)31827;
unsigned short var_8 = (unsigned short)31508;
short var_9 = (short)-30950;
short var_10 = (short)-30099;
unsigned long long int var_11 = 3525959076735089924ULL;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
unsigned char var_15 = (unsigned char)144;
short var_16 = (short)-19989;
long long int var_17 = 567996226101899595LL;
unsigned char var_18 = (unsigned char)240;
short var_19 = (short)-17732;
unsigned short var_20 = (unsigned short)63865;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)26479;
int var_23 = -1178187567;
int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -159694757;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)68 : (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3540441685534203834LL : 2890541538266062997LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
