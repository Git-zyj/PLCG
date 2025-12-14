#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
signed char var_1 = (signed char)27;
unsigned short var_3 = (unsigned short)16479;
signed char var_4 = (signed char)13;
long long int var_5 = 5874439573979213838LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)163;
unsigned short var_9 = (unsigned short)7181;
unsigned short var_13 = (unsigned short)26687;
short var_14 = (short)11818;
int zero = 0;
unsigned char var_15 = (unsigned char)235;
signed char var_16 = (signed char)-96;
short var_17 = (short)24330;
signed char var_18 = (signed char)118;
long long int arr_0 [18] ;
unsigned char arr_2 [18] ;
short arr_3 [18] ;
unsigned int arr_4 [18] ;
unsigned long long int arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 6366938946725299850LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)1042;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1789272530U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 17714375972293154615ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26963;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
