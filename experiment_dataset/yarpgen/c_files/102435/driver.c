#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1106970649;
int var_2 = 986603933;
unsigned short var_4 = (unsigned short)44017;
unsigned int var_5 = 601448241U;
short var_7 = (short)-11261;
signed char var_8 = (signed char)-34;
unsigned char var_10 = (unsigned char)64;
long long int var_14 = -3594458863904388929LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
int var_21 = -1820318648;
unsigned char var_22 = (unsigned char)55;
unsigned int var_23 = 1161065100U;
int var_24 = 279595312;
long long int arr_1 [13] ;
_Bool arr_2 [13] ;
short arr_4 [13] [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
_Bool arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -6609389575939361207LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)10038;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 949434134408400227ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
