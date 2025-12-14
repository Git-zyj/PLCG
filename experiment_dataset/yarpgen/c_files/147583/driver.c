#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1465830682U;
int var_3 = -1836677788;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_8 = -1626044765;
signed char var_11 = (signed char)95;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 18384270188860828785ULL;
unsigned char var_16 = (unsigned char)190;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8735295239639732348LL;
unsigned int var_20 = 2911999156U;
unsigned char var_21 = (unsigned char)45;
int var_22 = 640300722;
unsigned short var_23 = (unsigned short)52924;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned short arr_0 [24] ;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] ;
unsigned char arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)60321;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 18415967147128179726ULL : 11247702213077402215ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)177;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
