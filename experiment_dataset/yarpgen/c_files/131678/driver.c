#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)26416;
unsigned long long int var_2 = 5401589683449484181ULL;
long long int var_3 = 6212434218447938052LL;
long long int var_4 = -975063856566250647LL;
unsigned long long int var_5 = 2154418187668628392ULL;
_Bool var_7 = (_Bool)0;
int var_9 = -1315454921;
int zero = 0;
unsigned int var_11 = 4148678660U;
unsigned short var_12 = (unsigned short)58575;
short var_13 = (short)-13589;
unsigned long long int var_14 = 4402174973782002728ULL;
_Bool var_15 = (_Bool)1;
short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
signed char arr_7 [24] [24] [24] [24] ;
signed char arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-5879;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4479149383898277801ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)69;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
