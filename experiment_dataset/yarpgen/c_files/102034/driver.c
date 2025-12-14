#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3044245162U;
long long int var_4 = 3162606728304770936LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 4094530788U;
unsigned short var_8 = (unsigned short)53983;
unsigned char var_9 = (unsigned char)234;
short var_10 = (short)3065;
int zero = 0;
unsigned long long int var_11 = 6984047104792841208ULL;
short var_12 = (short)-15954;
short var_13 = (short)-29838;
unsigned short var_14 = (unsigned short)5846;
unsigned int var_15 = 3385606750U;
_Bool arr_1 [21] ;
signed char arr_2 [21] [21] [21] ;
unsigned char arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3752966429U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-10235;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
