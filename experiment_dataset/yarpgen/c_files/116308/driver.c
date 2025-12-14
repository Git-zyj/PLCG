#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1850586723;
unsigned char var_5 = (unsigned char)50;
long long int var_10 = 8110081139547090743LL;
unsigned int var_11 = 971470488U;
unsigned long long int var_12 = 14466009104571093290ULL;
short var_16 = (short)9318;
unsigned char var_19 = (unsigned char)200;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-31635;
unsigned char var_23 = (unsigned char)31;
unsigned char var_24 = (unsigned char)110;
short var_25 = (short)-31070;
short arr_0 [13] ;
_Bool arr_1 [13] [13] ;
_Bool arr_2 [17] [17] ;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-11837;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3234739270U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
