#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)29001;
unsigned short var_4 = (unsigned short)54903;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-28;
signed char var_8 = (signed char)44;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 6527622416796328226ULL;
short var_12 = (short)-29516;
unsigned short var_13 = (unsigned short)16670;
short var_14 = (short)31507;
signed char var_15 = (signed char)101;
long long int var_16 = 5360241329044630529LL;
unsigned long long int var_17 = 13352147718572720551ULL;
unsigned long long int arr_0 [25] [25] ;
unsigned char arr_2 [25] ;
long long int arr_9 [13] [13] ;
_Bool arr_13 [13] ;
short arr_3 [25] ;
signed char arr_4 [25] ;
unsigned short arr_14 [13] [13] [13] [13] ;
long long int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 4926823019140467171ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 4349219113281377159LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-16589;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)17513 : (unsigned short)58151;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 3633931066534693954LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
