#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 1685756404U;
unsigned int var_6 = 3316436523U;
unsigned int var_7 = 493207401U;
unsigned int var_9 = 4042601169U;
unsigned short var_13 = (unsigned short)40077;
long long int var_14 = -4269927090852785687LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)39371;
unsigned int var_17 = 733716190U;
short var_18 = (short)15469;
unsigned int var_19 = 1145449451U;
unsigned short var_20 = (unsigned short)57936;
unsigned int var_21 = 935849895U;
unsigned int var_22 = 3196734250U;
signed char var_23 = (signed char)95;
unsigned int arr_0 [12] ;
long long int arr_1 [12] ;
long long int arr_4 [12] [12] [12] ;
unsigned int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2051736334U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -4844746842942384249LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5373389012139846806LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 2272062967U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
