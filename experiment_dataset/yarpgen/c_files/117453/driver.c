#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4917;
signed char var_1 = (signed char)-22;
short var_2 = (short)-32155;
unsigned int var_3 = 22609903U;
short var_4 = (short)14272;
unsigned int var_6 = 2146091931U;
long long int var_8 = 8443588352337874251LL;
long long int var_9 = -67749777378287573LL;
unsigned int var_10 = 3196681794U;
int var_11 = 1486608753;
short var_12 = (short)-28259;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17331661299086969752ULL;
unsigned long long int var_15 = 9966149958774172444ULL;
int zero = 0;
signed char var_16 = (signed char)-66;
unsigned int var_17 = 606343712U;
signed char var_18 = (signed char)54;
unsigned long long int var_19 = 16293526791367344216ULL;
long long int var_20 = 5217777943209097924LL;
long long int var_21 = 6391301473091416189LL;
signed char var_22 = (signed char)-92;
unsigned short var_23 = (unsigned short)62118;
signed char var_24 = (signed char)9;
unsigned long long int var_25 = 11788170863743197080ULL;
unsigned char var_26 = (unsigned char)134;
unsigned long long int var_27 = 11825593384030103736ULL;
unsigned long long int var_28 = 14768718759237127823ULL;
unsigned char var_29 = (unsigned char)79;
long long int var_30 = 5569789489342260394LL;
unsigned short arr_0 [14] ;
int arr_2 [14] [14] [14] ;
unsigned long long int arr_4 [14] [14] ;
_Bool arr_5 [14] [14] ;
long long int arr_10 [14] [14] [14] [14] [14] ;
signed char arr_17 [25] [25] [25] ;
signed char arr_19 [25] [25] [25] ;
signed char arr_20 [25] ;
unsigned long long int arr_22 [25] [25] ;
_Bool arr_24 [25] [25] [25] ;
int arr_25 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)17771;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 172643412;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 15469123399114495916ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -1817461825066783423LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 14722999726767073774ULL : 1745898760668264443ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 876511282;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
