#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24337;
unsigned int var_3 = 505705908U;
unsigned char var_5 = (unsigned char)38;
unsigned char var_6 = (unsigned char)129;
unsigned int var_8 = 3799822017U;
signed char var_11 = (signed char)-72;
int var_16 = -903939023;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 472972228U;
unsigned long long int var_22 = 14945408335537490288ULL;
long long int var_23 = -8808629877147711428LL;
unsigned int var_24 = 4062925586U;
int var_25 = 953092869;
unsigned long long int var_26 = 3660563533100515527ULL;
unsigned int var_27 = 534692728U;
unsigned int var_28 = 3416009404U;
_Bool arr_1 [15] [15] ;
int arr_3 [15] ;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -2110126655;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -193703848;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
