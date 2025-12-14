#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4289153630U;
signed char var_2 = (signed char)120;
unsigned int var_4 = 3146467149U;
unsigned long long int var_5 = 13364754861433106232ULL;
unsigned short var_6 = (unsigned short)5974;
unsigned long long int var_7 = 3758028088645413600ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned int var_13 = 4179623760U;
unsigned long long int var_14 = 12642162176285305765ULL;
unsigned int var_15 = 2413830781U;
signed char var_16 = (signed char)-101;
unsigned long long int var_17 = 7913370662503567134ULL;
unsigned long long int arr_4 [22] ;
_Bool arr_5 [22] [22] ;
_Bool arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 12257758473185968085ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
