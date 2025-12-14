#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16877;
signed char var_5 = (signed char)28;
unsigned long long int var_7 = 2920903817521782010ULL;
int var_9 = -922636407;
_Bool var_11 = (_Bool)1;
int var_12 = -32402159;
int var_17 = 1672811050;
int zero = 0;
long long int var_18 = 7180592210687801352LL;
short var_19 = (short)28666;
short var_20 = (short)10065;
signed char var_21 = (signed char)-71;
long long int var_22 = -2964645829266598942LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)38575;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-44;
unsigned short var_27 = (unsigned short)25507;
unsigned char var_28 = (unsigned char)108;
signed char var_29 = (signed char)-49;
short var_30 = (short)28973;
_Bool arr_0 [18] [18] ;
signed char arr_11 [17] [17] [17] ;
unsigned char arr_14 [20] ;
unsigned short arr_15 [20] ;
signed char arr_2 [18] [18] ;
unsigned char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned short)38664;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)153 : (unsigned char)143;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
