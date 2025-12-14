#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-12497;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2342585561U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)(-127 - 1);
long long int var_13 = -2443911317727382067LL;
int var_16 = 1036691929;
signed char var_17 = (signed char)-7;
int zero = 0;
unsigned long long int var_18 = 41316243820574913ULL;
long long int var_19 = -3551869816231115700LL;
long long int var_20 = -6227632191794181250LL;
signed char var_21 = (signed char)76;
unsigned int var_22 = 483595740U;
short var_23 = (short)31428;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
signed char arr_5 [19] ;
unsigned char arr_9 [19] ;
unsigned int arr_10 [19] [19] ;
unsigned int arr_11 [19] [19] [19] ;
unsigned int arr_13 [19] [19] ;
unsigned short arr_6 [19] [19] ;
int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 6854469622121192617ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 8158915218476918453ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 3938340619U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1933655271U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = 1205153072U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)36512;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -335068571;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
