#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-13;
unsigned long long int var_3 = 3057259221708910954ULL;
signed char var_4 = (signed char)-57;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-39;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-80;
int zero = 0;
unsigned short var_15 = (unsigned short)44854;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)14902;
unsigned char var_18 = (unsigned char)239;
unsigned int var_19 = 1908850831U;
signed char var_20 = (signed char)127;
signed char var_21 = (signed char)102;
signed char arr_0 [10] ;
unsigned char arr_2 [10] ;
unsigned int arr_8 [13] [13] ;
_Bool arr_4 [10] ;
_Bool arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 3700757171U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
