#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1414759678115898469LL;
signed char var_1 = (signed char)-3;
long long int var_2 = -6008778166261111761LL;
int var_3 = 534397344;
unsigned short var_6 = (unsigned short)12857;
_Bool var_7 = (_Bool)1;
unsigned short var_13 = (unsigned short)718;
unsigned int var_14 = 2875100957U;
int zero = 0;
unsigned long long int var_15 = 12736098303442121042ULL;
unsigned short var_16 = (unsigned short)34351;
unsigned int var_17 = 3645114870U;
signed char var_18 = (signed char)-32;
unsigned int var_19 = 68540749U;
unsigned int var_20 = 4090076011U;
long long int var_21 = 226638722026291864LL;
unsigned int arr_2 [14] ;
unsigned int arr_4 [14] ;
signed char arr_5 [14] [14] [14] ;
signed char arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2486126143U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1470757342U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-23;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
