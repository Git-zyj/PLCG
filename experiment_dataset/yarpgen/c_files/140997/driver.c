#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1256021944U;
signed char var_6 = (signed char)113;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)81;
int var_12 = -1541932457;
unsigned int var_16 = 2967427511U;
unsigned long long int var_19 = 13319260079815391681ULL;
int zero = 0;
signed char var_20 = (signed char)87;
unsigned int var_21 = 934924450U;
signed char var_22 = (signed char)90;
signed char var_23 = (signed char)10;
unsigned int var_24 = 2479049503U;
unsigned int var_25 = 2301438343U;
signed char arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
signed char arr_2 [16] ;
signed char arr_8 [12] ;
signed char arr_9 [12] ;
_Bool arr_5 [10] ;
signed char arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 12649164506881984692ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
