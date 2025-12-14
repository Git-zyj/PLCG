#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)9564;
long long int var_3 = 7731047409026357438LL;
unsigned char var_4 = (unsigned char)163;
unsigned long long int var_5 = 12999717264614765507ULL;
int var_6 = 109414502;
unsigned long long int var_8 = 15345151801030115275ULL;
unsigned long long int var_9 = 4726982704301491384ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)20575;
int var_11 = -866884474;
int var_12 = 1789736461;
unsigned short var_13 = (unsigned short)46747;
unsigned long long int var_14 = 871364684565264287ULL;
int var_15 = 897423902;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4120379180U;
short arr_1 [20] ;
signed char arr_2 [20] ;
unsigned int arr_4 [11] [11] ;
_Bool arr_5 [11] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)19697;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1292244404U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
