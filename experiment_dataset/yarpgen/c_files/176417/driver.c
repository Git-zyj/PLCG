#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 421340492;
unsigned long long int var_1 = 5007683219108538337ULL;
unsigned char var_4 = (unsigned char)26;
unsigned int var_5 = 509931163U;
int var_8 = 1725101419;
int var_9 = 2030048168;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)28;
int zero = 0;
signed char var_18 = (signed char)-101;
int var_19 = 66409881;
unsigned char var_20 = (unsigned char)19;
unsigned char var_21 = (unsigned char)86;
_Bool arr_0 [13] ;
long long int arr_1 [13] [13] ;
signed char arr_2 [13] ;
long long int arr_4 [13] [13] [13] ;
unsigned char arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 324552140074234637LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6995096739003297113LL : -8552468562513010397LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)54 : (unsigned char)243;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
