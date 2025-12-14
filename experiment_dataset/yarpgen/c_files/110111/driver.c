#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9260179509924359565ULL;
unsigned long long int var_1 = 14077599411633197094ULL;
unsigned int var_5 = 2564015897U;
_Bool var_6 = (_Bool)0;
int var_9 = 1806859286;
unsigned long long int var_10 = 9022366660965593811ULL;
unsigned char var_14 = (unsigned char)78;
int zero = 0;
unsigned int var_16 = 2243376052U;
unsigned char var_17 = (unsigned char)219;
short var_18 = (short)20262;
unsigned char var_19 = (unsigned char)133;
_Bool var_20 = (_Bool)1;
unsigned int arr_0 [23] ;
short arr_1 [23] [23] ;
long long int arr_3 [23] ;
unsigned char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3035955848U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11251;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 341659708982776800LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)52;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
