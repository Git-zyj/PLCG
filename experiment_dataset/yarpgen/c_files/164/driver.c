#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38510;
int var_1 = -775541148;
unsigned short var_2 = (unsigned short)53396;
unsigned long long int var_3 = 14724211157798048722ULL;
int var_4 = 1313697165;
unsigned short var_5 = (unsigned short)5901;
int var_6 = -1303561912;
unsigned long long int var_7 = 16874041161206500661ULL;
int var_9 = 1419594929;
long long int var_11 = 5090203595522995825LL;
int zero = 0;
unsigned long long int var_12 = 5692355266129322651ULL;
unsigned short var_13 = (unsigned short)43059;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5909267455267621466LL;
long long int var_16 = -8019460573499692151LL;
unsigned short var_17 = (unsigned short)29764;
long long int var_18 = -772800963703833459LL;
int var_19 = 1854798800;
long long int var_20 = 4072429942524124859LL;
long long int var_21 = 1614708097539741212LL;
unsigned long long int var_22 = 16616855276703292329ULL;
unsigned short var_23 = (unsigned short)59370;
int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
_Bool arr_3 [21] ;
int arr_5 [21] ;
short arr_6 [21] [21] ;
int arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -371775543;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -294099357;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (short)31561;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 1011641796;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
