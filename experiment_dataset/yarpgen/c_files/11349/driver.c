#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13996299649369035534ULL;
unsigned short var_1 = (unsigned short)21103;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1078149372U;
_Bool var_4 = (_Bool)1;
long long int var_5 = -3212953893034489757LL;
unsigned long long int var_8 = 5737247220635886490ULL;
unsigned short var_9 = (unsigned short)45010;
unsigned int var_11 = 840617076U;
unsigned short var_12 = (unsigned short)60664;
unsigned short var_13 = (unsigned short)34169;
int var_14 = 715384738;
unsigned short var_15 = (unsigned short)19041;
int zero = 0;
int var_17 = 2041609639;
short var_18 = (short)-30148;
unsigned char var_19 = (unsigned char)185;
int var_20 = -1826569648;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1232374597327030594ULL;
unsigned long long int var_23 = 14474343949907134881ULL;
long long int var_24 = 2834745859771482433LL;
unsigned short arr_0 [23] [23] ;
long long int arr_2 [23] ;
unsigned int arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] ;
long long int arr_5 [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60288 : (unsigned short)4923;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -4960210890139044415LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3770371148U : 264947411U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 11086956831117920978ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 5641442918045614845LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)21204;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
