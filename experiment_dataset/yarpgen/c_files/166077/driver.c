#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1131642177U;
unsigned char var_5 = (unsigned char)249;
_Bool var_8 = (_Bool)1;
long long int var_10 = -7202882910782910112LL;
unsigned int var_11 = 4180636998U;
short var_13 = (short)-27640;
int zero = 0;
unsigned int var_14 = 4143147649U;
unsigned short var_15 = (unsigned short)1998;
unsigned char var_16 = (unsigned char)195;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3850417284U;
unsigned int var_19 = 3432429901U;
unsigned int var_20 = 1316159602U;
unsigned int var_21 = 1430504511U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3445352470214745535LL;
unsigned int arr_2 [10] ;
unsigned int arr_6 [23] [23] ;
unsigned int arr_3 [10] ;
unsigned short arr_7 [23] ;
unsigned int arr_19 [11] ;
unsigned char arr_22 [11] [11] ;
unsigned int arr_23 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2811954421U : 1977165704U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 2320577068U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2942302652U : 1718784497U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)18831;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1330367668U : 3808452725U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)231 : (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 500840703U : 2970299135U;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
