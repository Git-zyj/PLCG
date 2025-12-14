#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3965304257221241389LL;
unsigned long long int var_1 = 14106265687732266969ULL;
short var_2 = (short)18420;
signed char var_3 = (signed char)23;
short var_4 = (short)6230;
int var_5 = -1765509760;
unsigned long long int var_6 = 10907174770414466732ULL;
int var_9 = -2070890479;
int zero = 0;
short var_10 = (short)-6068;
long long int var_11 = -3844026577178203201LL;
short var_12 = (short)13151;
short var_13 = (short)13272;
long long int var_14 = -6927184564631139088LL;
unsigned long long int var_15 = 8970446166789531043ULL;
short var_16 = (short)-5571;
unsigned int var_17 = 3295606731U;
short var_18 = (short)-15795;
unsigned long long int var_19 = 1037613474642469137ULL;
signed char var_20 = (signed char)69;
unsigned long long int var_21 = 14020605748610981783ULL;
unsigned long long int var_22 = 6562633215136223636ULL;
signed char arr_0 [22] ;
short arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
_Bool arr_4 [22] ;
short arr_5 [22] [22] [22] [22] ;
short arr_6 [22] ;
_Bool arr_9 [19] [19] ;
long long int arr_12 [15] ;
int arr_16 [15] [15] ;
long long int arr_17 [15] ;
int arr_19 [15] [15] ;
short arr_20 [15] [15] [15] [15] ;
long long int arr_10 [19] [19] ;
long long int arr_11 [19] ;
short arr_14 [15] [15] ;
unsigned long long int arr_15 [15] ;
long long int arr_24 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)19996;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 6775642017429856159ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)28285;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)-9526;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = -176528306672209199LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 505360538 : 1330194515;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = -2944422798018357425LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = -195585329;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)11187 : (short)12145;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -6984341215812240306LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 3934956109479909771LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)13721 : (short)8206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 18316000942918232975ULL : 10709583965854557692ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? -6588083962833524523LL : -535302944903480586LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
