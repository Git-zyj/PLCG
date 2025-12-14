#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -6989536854481004366LL;
int var_6 = 696280805;
unsigned short var_7 = (unsigned short)46062;
long long int var_10 = 3580721235438329962LL;
int var_12 = -1431051821;
unsigned long long int var_13 = 4322919170766909464ULL;
signed char var_14 = (signed char)14;
_Bool var_15 = (_Bool)0;
unsigned long long int var_18 = 8690494693475873610ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)38562;
unsigned long long int var_21 = 16538673440178919543ULL;
long long int var_22 = 355574588653118102LL;
long long int var_23 = 1544327876770176499LL;
int var_24 = 1253242070;
unsigned char var_25 = (unsigned char)121;
long long int var_26 = -4990225212270848348LL;
long long int arr_0 [19] ;
signed char arr_3 [19] ;
unsigned short arr_4 [19] [19] ;
unsigned char arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8666945467725150002LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)30643;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)210 : (unsigned char)223;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
