#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1782760407;
unsigned short var_1 = (unsigned short)61936;
unsigned int var_3 = 3007475582U;
int var_4 = 1100429831;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3602813815U;
long long int var_7 = 7437651475746876432LL;
unsigned short var_8 = (unsigned short)52520;
int zero = 0;
signed char var_10 = (signed char)-31;
short var_11 = (short)-15702;
unsigned short var_12 = (unsigned short)2974;
long long int var_13 = 1277655877836311715LL;
unsigned long long int var_14 = 4308925192607630639ULL;
unsigned long long int var_15 = 17924710894112317475ULL;
long long int var_16 = 2312105825599264426LL;
unsigned short var_17 = (unsigned short)36892;
unsigned short var_18 = (unsigned short)8974;
short var_19 = (short)22553;
unsigned char arr_0 [16] ;
signed char arr_1 [16] [16] ;
unsigned long long int arr_2 [15] ;
unsigned short arr_3 [15] ;
long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 419055876709802266ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)54189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 7697435896972396646LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
