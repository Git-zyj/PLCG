#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11780;
int var_4 = -1284397373;
long long int var_5 = -5519455201491264138LL;
unsigned char var_6 = (unsigned char)126;
unsigned char var_8 = (unsigned char)18;
signed char var_12 = (signed char)81;
short var_13 = (short)-16350;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)1;
unsigned char var_16 = (unsigned char)233;
int zero = 0;
long long int var_17 = 5821438813665657145LL;
signed char var_18 = (signed char)77;
unsigned char var_19 = (unsigned char)1;
unsigned int var_20 = 4193978699U;
int arr_2 [25] [25] ;
signed char arr_3 [25] ;
long long int arr_7 [25] ;
short arr_8 [25] ;
unsigned int arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -351795131;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -1792045319586066835LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)9155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 3052384973U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
