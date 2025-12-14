#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)48;
unsigned short var_6 = (unsigned short)47893;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4229111430022726986LL;
signed char var_13 = (signed char)56;
signed char var_14 = (signed char)116;
unsigned short var_15 = (unsigned short)50165;
int var_16 = -754978458;
int zero = 0;
signed char var_18 = (signed char)28;
unsigned char var_19 = (unsigned char)34;
unsigned short var_20 = (unsigned short)51555;
long long int var_21 = 3173539970035324128LL;
short var_22 = (short)-31296;
unsigned short var_23 = (unsigned short)14725;
unsigned short arr_0 [16] ;
unsigned int arr_2 [16] ;
short arr_5 [16] ;
signed char arr_6 [16] [16] [16] ;
long long int arr_4 [16] ;
unsigned short arr_10 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)48136;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3100627271U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-22395;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1669517039616906244LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)53695;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
