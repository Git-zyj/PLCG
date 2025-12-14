#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -92131516;
unsigned short var_3 = (unsigned short)32068;
unsigned int var_12 = 3733554487U;
signed char var_14 = (signed char)3;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
short var_19 = (short)12201;
int var_20 = -1303367442;
int var_21 = 298023426;
unsigned short var_22 = (unsigned short)49020;
unsigned long long int var_23 = 14592321598559819285ULL;
unsigned short var_24 = (unsigned short)48318;
long long int var_25 = 1026246937272015364LL;
short var_26 = (short)-21163;
unsigned char arr_0 [17] ;
short arr_1 [17] [17] ;
int arr_5 [17] [17] [17] [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29047;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -155967344;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 7443804888521767774LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
