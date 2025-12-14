#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned long long int var_2 = 10637223828527133063ULL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)12137;
short var_5 = (short)-12047;
unsigned long long int var_7 = 7871030393289943589ULL;
unsigned int var_8 = 1644048645U;
unsigned char var_13 = (unsigned char)37;
int var_14 = -536860901;
int zero = 0;
signed char var_16 = (signed char)103;
unsigned char var_17 = (unsigned char)225;
signed char var_18 = (signed char)-65;
long long int var_19 = -2051282400511668741LL;
unsigned char var_20 = (unsigned char)166;
unsigned char var_21 = (unsigned char)168;
unsigned long long int var_22 = 5967034487144007100ULL;
unsigned long long int var_23 = 3240311402241144229ULL;
_Bool var_24 = (_Bool)1;
long long int var_25 = 4253471070418470086LL;
unsigned char var_26 = (unsigned char)140;
unsigned long long int var_27 = 13958918907311901764ULL;
unsigned long long int var_28 = 3469689813808152516ULL;
long long int var_29 = 3549404809986393830LL;
unsigned short var_30 = (unsigned short)19561;
unsigned short var_31 = (unsigned short)11673;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)1;
unsigned int arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
unsigned char arr_2 [18] ;
unsigned char arr_3 [18] ;
long long int arr_4 [18] [18] ;
signed char arr_5 [18] [18] [18] ;
short arr_6 [18] [18] [18] ;
unsigned char arr_8 [18] [18] ;
_Bool arr_10 [18] ;
unsigned int arr_18 [18] ;
unsigned char arr_16 [18] ;
unsigned int arr_23 [18] [18] ;
unsigned char arr_24 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3232872131U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)46215;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1223076740858087481LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-13385;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 240589422U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = 509328409U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (unsigned char)190;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
