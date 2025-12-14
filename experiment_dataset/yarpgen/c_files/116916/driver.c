#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 386392684U;
signed char var_4 = (signed char)-29;
unsigned int var_5 = 1837270239U;
short var_6 = (short)-19759;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3643922608U;
signed char var_12 = (signed char)48;
unsigned int var_14 = 1299757835U;
int zero = 0;
signed char var_15 = (signed char)74;
unsigned int var_16 = 2795825992U;
signed char var_17 = (signed char)-80;
unsigned char var_18 = (unsigned char)219;
int var_19 = 1137773776;
short var_20 = (short)15346;
signed char var_21 = (signed char)-91;
signed char var_22 = (signed char)16;
unsigned int var_23 = 3651063877U;
unsigned short arr_7 [18] [18] ;
unsigned int arr_11 [22] ;
long long int arr_12 [22] [22] ;
short arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)17448 : (unsigned short)40912;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 662705262U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = -2740323135937091848LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)31595 : (short)-12630;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
