#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
short var_1 = (short)-13873;
unsigned short var_3 = (unsigned short)55855;
signed char var_4 = (signed char)-123;
unsigned int var_5 = 2549785796U;
unsigned int var_10 = 870107617U;
short var_11 = (short)-11885;
signed char var_12 = (signed char)-3;
unsigned int var_13 = 3148037013U;
int zero = 0;
unsigned long long int var_14 = 13896298560053594555ULL;
signed char var_15 = (signed char)0;
unsigned int var_16 = 2715538411U;
unsigned int var_17 = 3323143688U;
signed char var_18 = (signed char)-89;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)28472;
_Bool arr_0 [12] ;
short arr_1 [12] [12] ;
int arr_2 [12] ;
unsigned short arr_3 [12] [12] ;
_Bool arr_7 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-12366 : (short)27633;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1773376872;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)35242;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
