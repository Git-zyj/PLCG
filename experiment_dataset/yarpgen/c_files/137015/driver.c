#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)183;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-101;
unsigned int var_9 = 1525190838U;
unsigned long long int var_10 = 8297090124006400898ULL;
long long int var_11 = 7927976752312334688LL;
short var_12 = (short)2501;
int zero = 0;
unsigned long long int var_14 = 3472651034627777216ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)73;
unsigned long long int var_18 = 15439889033587967268ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11678783182444853187ULL;
int var_21 = 1591813394;
signed char var_22 = (signed char)40;
unsigned char arr_2 [11] [11] [11] ;
unsigned int arr_3 [11] ;
unsigned char arr_7 [11] [11] [11] [11] ;
int arr_12 [11] [11] [11] ;
_Bool arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2907959300U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -331562395 : 586076269;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
