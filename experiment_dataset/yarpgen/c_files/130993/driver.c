#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -915784912;
long long int var_1 = -3212632660333388350LL;
short var_7 = (short)-23292;
unsigned short var_11 = (unsigned short)49607;
int var_13 = -709959399;
unsigned long long int var_15 = 7205412413273004759ULL;
int zero = 0;
short var_16 = (short)28206;
unsigned short var_17 = (unsigned short)11847;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1818513515U;
unsigned long long int arr_3 [18] [18] [18] ;
signed char arr_5 [18] [18] [18] ;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7581368032018594101ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)3626;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
