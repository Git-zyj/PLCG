#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
signed char var_3 = (signed char)-90;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3206665052U;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)193;
signed char var_12 = (signed char)124;
unsigned long long int var_13 = 15068732566338870393ULL;
unsigned long long int var_16 = 3511595677045696481ULL;
unsigned long long int var_17 = 1246159895909525627ULL;
unsigned char var_18 = (unsigned char)83;
int zero = 0;
signed char var_20 = (signed char)-82;
unsigned char var_21 = (unsigned char)32;
unsigned char var_22 = (unsigned char)197;
unsigned char var_23 = (unsigned char)29;
signed char var_24 = (signed char)101;
unsigned char var_25 = (unsigned char)18;
signed char var_26 = (signed char)-45;
unsigned long long int var_27 = 11655052876373340723ULL;
signed char var_28 = (signed char)2;
signed char var_29 = (signed char)-6;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)-77;
unsigned long long int var_32 = 18122058978832373821ULL;
signed char var_33 = (signed char)-76;
unsigned char arr_0 [10] ;
_Bool arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
_Bool arr_6 [10] ;
unsigned long long int arr_7 [25] [25] ;
unsigned char arr_8 [25] ;
signed char arr_9 [25] ;
signed char arr_10 [25] [25] ;
unsigned long long int arr_11 [25] ;
unsigned int arr_4 [10] ;
long long int arr_12 [25] [25] ;
unsigned char arr_13 [25] [25] [25] ;
signed char arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 2722595766038222493ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 10576749649682766409ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 3518000911U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 1626861453892275434LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)-55;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
