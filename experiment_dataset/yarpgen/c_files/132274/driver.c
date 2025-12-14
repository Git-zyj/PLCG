#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)30229;
unsigned long long int var_5 = 2600474845620319737ULL;
unsigned short var_6 = (unsigned short)64762;
short var_8 = (short)-13713;
int zero = 0;
short var_10 = (short)13592;
long long int var_11 = -6059194571744726077LL;
unsigned long long int var_12 = 17831592986303564334ULL;
unsigned short var_13 = (unsigned short)35085;
unsigned short var_14 = (unsigned short)41845;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
long long int arr_1 [22] ;
short arr_3 [22] [22] ;
unsigned long long int arr_6 [21] [21] ;
unsigned long long int arr_4 [22] ;
unsigned long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 4509768942917579029LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)10991;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 13684194303161248419ULL : 5537201335132633831ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1800508401661165259ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 455595552033606493ULL : 13384367157126715085ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
