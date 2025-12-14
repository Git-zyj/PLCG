#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8855291615285547629ULL;
unsigned char var_5 = (unsigned char)214;
int var_11 = 1232533176;
long long int var_13 = 3654196139933763951LL;
unsigned long long int var_14 = 13103058877412159516ULL;
int zero = 0;
int var_16 = -1041465000;
_Bool var_17 = (_Bool)1;
int var_18 = 462634889;
unsigned char var_19 = (unsigned char)199;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)13;
unsigned char var_22 = (unsigned char)52;
signed char arr_0 [15] [15] ;
_Bool arr_4 [15] [15] ;
unsigned char arr_5 [15] [15] [15] ;
unsigned char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)130;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
