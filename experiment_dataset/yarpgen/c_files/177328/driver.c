#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1099133467;
signed char var_11 = (signed char)-7;
short var_14 = (short)31481;
long long int var_19 = -8671333117821303584LL;
int zero = 0;
short var_20 = (short)-15245;
signed char var_21 = (signed char)-98;
long long int var_22 = 58836872755476425LL;
unsigned char arr_0 [14] ;
signed char arr_3 [14] ;
unsigned short arr_6 [14] ;
unsigned int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22534 : (unsigned short)58687;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1486780909U : 1065070707U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
