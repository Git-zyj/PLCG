#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2391936827531820908LL;
unsigned long long int var_1 = 3799962106604572408ULL;
int var_2 = 1848071317;
short var_8 = (short)-1882;
short var_9 = (short)-20653;
unsigned long long int var_11 = 552439886245213666ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
unsigned long long int var_13 = 16149039042196835614ULL;
unsigned short var_14 = (unsigned short)8128;
short var_15 = (short)10762;
unsigned char var_16 = (unsigned char)214;
unsigned short arr_0 [17] ;
int arr_1 [17] ;
_Bool arr_3 [17] [17] [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)36927;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1303993654;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -4745939721534054345LL : -5578245183028262393LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
