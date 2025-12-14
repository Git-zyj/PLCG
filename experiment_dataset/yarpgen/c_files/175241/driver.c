#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 7911425625986478586ULL;
short var_4 = (short)13226;
signed char var_8 = (signed char)6;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-110;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)35229;
signed char var_14 = (signed char)-5;
int zero = 0;
signed char var_15 = (signed char)-44;
unsigned long long int var_16 = 18197775640321051483ULL;
signed char var_17 = (signed char)-36;
signed char var_18 = (signed char)29;
long long int arr_0 [15] [15] ;
unsigned short arr_3 [15] ;
unsigned long long int arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -1352898996844107807LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)60987;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 18281071724341039534ULL : 14732552032650527840ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
