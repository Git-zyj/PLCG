#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3576532927024449453LL;
short var_1 = (short)-32087;
unsigned int var_2 = 318999532U;
signed char var_3 = (signed char)-18;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 1658651333465133236ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)54;
int zero = 0;
unsigned long long int var_10 = 13785592714454356256ULL;
short var_11 = (short)-21751;
long long int var_12 = -7964197957416035735LL;
signed char var_13 = (signed char)-94;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3662935375768917711LL;
int var_17 = 1712565221;
_Bool arr_1 [15] ;
unsigned long long int arr_3 [15] ;
long long int arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 16227074723838098439ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -7132885408109542951LL : 244054671775687835LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)4162;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
