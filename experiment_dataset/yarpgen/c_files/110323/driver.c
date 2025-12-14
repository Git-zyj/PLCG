#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_9 = (short)5765;
unsigned char var_10 = (unsigned char)62;
int zero = 0;
int var_12 = -1282677984;
unsigned short var_13 = (unsigned short)24406;
unsigned int var_14 = 4161665493U;
short var_15 = (short)-13402;
long long int var_16 = 745138685537337511LL;
short var_17 = (short)-16556;
unsigned long long int var_18 = 309662819870088280ULL;
short var_19 = (short)5191;
unsigned long long int var_20 = 8217868915296738491ULL;
_Bool arr_0 [22] ;
short arr_1 [22] ;
unsigned short arr_7 [17] [17] ;
unsigned char arr_10 [17] [17] [17] [17] ;
unsigned int arr_13 [17] [17] ;
long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-31089;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)54500 : (unsigned short)53683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 2518056024U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -223829936532700217LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
