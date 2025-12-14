#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
unsigned long long int var_4 = 2278966182443997723ULL;
unsigned short var_5 = (unsigned short)30202;
long long int var_7 = 5842517285209920765LL;
unsigned long long int var_8 = 15036166895357375804ULL;
unsigned char var_9 = (unsigned char)42;
unsigned long long int var_11 = 1633196353894587869ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8325360606621367063LL;
unsigned long long int var_17 = 16371474658906826842ULL;
signed char var_18 = (signed char)-63;
unsigned short var_19 = (unsigned short)14952;
_Bool arr_0 [18] [18] ;
signed char arr_1 [18] [18] ;
int arr_6 [23] ;
unsigned short arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1826445260;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23260;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
