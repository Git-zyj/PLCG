#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)973;
signed char var_3 = (signed char)127;
unsigned long long int var_5 = 11347436267672455477ULL;
signed char var_6 = (signed char)-10;
long long int var_8 = 6675594838638263646LL;
signed char var_9 = (signed char)8;
signed char var_10 = (signed char)-49;
int zero = 0;
unsigned char var_11 = (unsigned char)90;
signed char var_12 = (signed char)38;
unsigned int var_13 = 2521829694U;
signed char var_14 = (signed char)6;
unsigned long long int var_15 = 16235479940230332854ULL;
int var_16 = -2090974063;
long long int var_17 = 2414214694504257970LL;
unsigned long long int arr_0 [21] ;
int arr_1 [21] ;
unsigned short arr_3 [21] ;
long long int arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
signed char arr_6 [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 17142606550771545354ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1471268836;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)32457;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2295783415067238600LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 11464922845918239814ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
