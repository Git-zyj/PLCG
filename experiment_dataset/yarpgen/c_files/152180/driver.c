#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1166660011;
unsigned long long int var_2 = 2970092249906071321ULL;
signed char var_3 = (signed char)93;
signed char var_4 = (signed char)116;
long long int var_6 = 6036749836719558204LL;
long long int var_7 = -8321895244553956537LL;
long long int var_8 = -2771124762660268808LL;
long long int var_10 = 5674140202995164847LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3264414650571483946LL;
unsigned short var_13 = (unsigned short)18053;
long long int var_14 = -4819414150734371997LL;
unsigned int var_17 = 3449643082U;
int zero = 0;
unsigned short var_19 = (unsigned short)11600;
unsigned short var_20 = (unsigned short)14098;
int var_21 = -1427844778;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)10252;
long long int var_25 = 2875739198267927208LL;
short arr_0 [25] ;
_Bool arr_1 [25] [25] ;
signed char arr_2 [25] ;
int arr_5 [25] ;
int arr_4 [25] ;
short arr_10 [25] ;
unsigned short arr_11 [25] ;
int arr_12 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)21176;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1994055735 : 1257114804;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 294544273;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)17773 : (short)-988;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49731 : (unsigned short)17758;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1298991361 : -1062291143;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
