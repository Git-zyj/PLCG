#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned short var_2 = (unsigned short)35216;
int var_3 = 737430682;
unsigned int var_4 = 1240099069U;
unsigned long long int var_5 = 12831137463273506279ULL;
_Bool var_7 = (_Bool)1;
int var_9 = 433358888;
unsigned char var_10 = (unsigned char)25;
unsigned long long int var_11 = 5627324694155709847ULL;
unsigned char var_13 = (unsigned char)233;
signed char var_14 = (signed char)33;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5882349258440329847LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)2;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2124201853U;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)165;
long long int var_26 = 4263654426644805920LL;
signed char var_27 = (signed char)30;
unsigned long long int var_28 = 6070086495833143532ULL;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-28586;
unsigned long long int var_32 = 4705946229434565928ULL;
unsigned char var_33 = (unsigned char)187;
int var_34 = -882638903;
_Bool arr_0 [18] ;
long long int arr_1 [18] ;
int arr_2 [18] [18] ;
signed char arr_3 [18] ;
unsigned int arr_4 [18] ;
unsigned long long int arr_6 [18] ;
unsigned char arr_7 [18] [18] [18] [18] ;
unsigned char arr_8 [18] [18] [18] [18] ;
short arr_9 [18] ;
short arr_11 [18] ;
signed char arr_12 [18] [18] [18] [18] ;
signed char arr_16 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -3571902460174466498LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1491513558;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1680658470U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 8694090043867397840ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)-19376;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (short)-18511;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)79;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
