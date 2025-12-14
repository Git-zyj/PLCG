#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9036858393979266546ULL;
unsigned char var_13 = (unsigned char)71;
int zero = 0;
unsigned char var_19 = (unsigned char)30;
unsigned char var_20 = (unsigned char)158;
unsigned short var_21 = (unsigned short)18147;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-109;
long long int var_24 = -5000325225352957737LL;
signed char var_25 = (signed char)-28;
unsigned int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned int arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
signed char arr_4 [18] ;
int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4063593645U : 3193584848U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 501165784U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 2484280874U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -886688104;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
