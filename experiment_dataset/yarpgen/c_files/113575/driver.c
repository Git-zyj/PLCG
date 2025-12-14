#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 429409534U;
signed char var_2 = (signed char)113;
short var_4 = (short)23494;
unsigned int var_7 = 3334022992U;
long long int var_8 = 4499815337852161456LL;
short var_9 = (short)8330;
unsigned char var_13 = (unsigned char)19;
unsigned long long int var_14 = 758937510051341893ULL;
int var_15 = -1750422563;
long long int var_16 = -8940676694963513500LL;
int zero = 0;
unsigned short var_17 = (unsigned short)8662;
long long int var_18 = 1977241633176516514LL;
signed char var_19 = (signed char)-46;
unsigned long long int var_20 = 12040316857133726833ULL;
unsigned int var_21 = 1639302458U;
unsigned short var_22 = (unsigned short)19335;
unsigned short var_23 = (unsigned short)36740;
unsigned int var_24 = 2550743747U;
unsigned short var_25 = (unsigned short)19778;
_Bool arr_0 [12] ;
int arr_3 [12] [12] ;
long long int arr_5 [12] ;
unsigned short arr_6 [12] ;
unsigned char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 1826153010;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 4811981575335991212LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)60763;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)232;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
