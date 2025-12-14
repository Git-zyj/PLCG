#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)558;
unsigned long long int var_1 = 13357946500601225788ULL;
unsigned int var_2 = 1661785798U;
unsigned long long int var_3 = 7735720993389504154ULL;
unsigned int var_5 = 2859473982U;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2706997924U;
int zero = 0;
long long int var_11 = 4971355424472033637LL;
long long int var_12 = 2974321752040906425LL;
long long int var_13 = 5281402954683727495LL;
unsigned short var_14 = (unsigned short)62091;
unsigned int var_15 = 3045683801U;
unsigned int var_16 = 776619123U;
unsigned long long int var_17 = 9292067571300534827ULL;
unsigned int var_18 = 3660865070U;
unsigned char var_19 = (unsigned char)68;
unsigned short var_20 = (unsigned short)39813;
unsigned int arr_2 [23] [23] ;
unsigned short arr_4 [23] [23] [23] ;
long long int arr_5 [23] ;
unsigned long long int arr_12 [23] [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_18 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3819484018U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)17947;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -4384108156741478573LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = 11881064981426325851ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)63945;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)50169;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
