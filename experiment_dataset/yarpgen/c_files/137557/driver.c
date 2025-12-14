#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1355375802;
signed char var_1 = (signed char)42;
unsigned char var_2 = (unsigned char)202;
unsigned long long int var_3 = 9057887578273988698ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 403494718U;
long long int var_7 = -5808930454163202319LL;
long long int var_8 = 8645840885282197994LL;
unsigned int var_9 = 476043252U;
unsigned char var_10 = (unsigned char)151;
int var_11 = -2129687307;
unsigned int var_12 = 1832877536U;
unsigned long long int var_13 = 9186346381522339794ULL;
unsigned short var_14 = (unsigned short)11916;
int zero = 0;
signed char var_15 = (signed char)-104;
unsigned long long int var_16 = 1377602044539005720ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)25275;
signed char var_19 = (signed char)104;
unsigned char var_20 = (unsigned char)251;
int var_21 = 1998681633;
int var_22 = 611284055;
_Bool arr_1 [14] [14] ;
unsigned int arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
long long int arr_4 [21] ;
signed char arr_12 [23] [23] [23] [23] ;
short arr_6 [21] ;
long long int arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 3045763112U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2118243696U : 2189889571U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -7593287702681699835LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)3362 : (short)-7317;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 5720222505797528654LL : -8081678960994818325LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
