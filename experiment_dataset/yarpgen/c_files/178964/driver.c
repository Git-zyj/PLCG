#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1095316701U;
unsigned char var_6 = (unsigned char)188;
signed char var_9 = (signed char)24;
unsigned short var_10 = (unsigned short)64715;
signed char var_13 = (signed char)-10;
unsigned char var_15 = (unsigned char)151;
int zero = 0;
signed char var_17 = (signed char)52;
unsigned char var_18 = (unsigned char)189;
signed char var_19 = (signed char)-105;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)57315;
unsigned int var_22 = 3111672860U;
signed char arr_0 [18] ;
unsigned int arr_3 [11] ;
unsigned short arr_2 [18] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2682677564U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)59329;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -164511525;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
