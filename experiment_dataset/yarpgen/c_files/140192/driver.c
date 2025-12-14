#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5319739918118280970LL;
long long int var_3 = 8784535341822399405LL;
unsigned int var_4 = 3944627921U;
long long int var_5 = 1974418421760541748LL;
unsigned char var_6 = (unsigned char)60;
_Bool var_7 = (_Bool)1;
long long int var_9 = -7304132174123873969LL;
short var_10 = (short)-5351;
unsigned int var_12 = 3816426548U;
unsigned short var_13 = (unsigned short)36993;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1468248419243230516LL;
int zero = 0;
unsigned char var_18 = (unsigned char)159;
unsigned long long int var_19 = 3931990581966470802ULL;
signed char var_20 = (signed char)33;
unsigned char var_21 = (unsigned char)74;
unsigned char var_22 = (unsigned char)87;
unsigned long long int var_23 = 4179779975955717305ULL;
unsigned long long int var_24 = 2250110687692652228ULL;
long long int var_25 = 4473738200448569162LL;
signed char var_26 = (signed char)101;
unsigned short var_27 = (unsigned short)3004;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)133;
signed char var_30 = (signed char)-5;
long long int var_31 = 6420971757629060771LL;
unsigned int var_32 = 3582317781U;
unsigned char arr_1 [15] ;
signed char arr_2 [15] ;
unsigned int arr_4 [15] ;
unsigned long long int arr_6 [15] [15] ;
short arr_8 [15] [15] [15] [15] ;
unsigned int arr_10 [21] [21] ;
unsigned char arr_11 [21] ;
unsigned int arr_13 [17] ;
signed char arr_23 [11] [11] [11] ;
unsigned char arr_25 [11] [11] [11] ;
unsigned int arr_17 [11] [11] ;
signed char arr_20 [11] [11] ;
unsigned int arr_21 [11] ;
unsigned int arr_24 [11] [11] ;
_Bool arr_28 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)119 : (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2268056844U : 1591311362U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2286561741700987361ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-17028;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 2770077616U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 1432233219U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = 378217503U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = 1208146427U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = 1801777933U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_28 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
