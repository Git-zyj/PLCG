#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
unsigned short var_1 = (unsigned short)56261;
unsigned long long int var_4 = 13942309514521313985ULL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)47;
unsigned long long int var_8 = 10776115020624636849ULL;
unsigned int var_11 = 2913001737U;
unsigned int var_13 = 3475301927U;
long long int var_14 = -4679499480714407178LL;
signed char var_15 = (signed char)58;
int zero = 0;
signed char var_16 = (signed char)-90;
unsigned int var_17 = 2224620315U;
long long int var_18 = -8601827751497133411LL;
unsigned short var_19 = (unsigned short)16855;
int var_20 = 459297550;
signed char var_21 = (signed char)-112;
long long int arr_0 [16] ;
signed char arr_1 [16] [16] ;
signed char arr_2 [16] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 596238904419049038LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
