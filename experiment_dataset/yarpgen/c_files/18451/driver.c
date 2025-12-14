#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17541541073041629377ULL;
signed char var_1 = (signed char)88;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-46;
unsigned char var_4 = (unsigned char)67;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11912963229002525185ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 12735012017884820380ULL;
unsigned int var_10 = 1768887605U;
unsigned long long int var_12 = 4609738697154308793ULL;
long long int var_13 = 6141655684575063366LL;
int zero = 0;
signed char var_14 = (signed char)22;
long long int var_15 = -2232990156608999310LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1032351464U;
unsigned int var_18 = 3646291724U;
_Bool var_19 = (_Bool)0;
int var_20 = 807147970;
unsigned short var_21 = (unsigned short)31024;
unsigned int arr_0 [15] ;
unsigned long long int arr_4 [15] ;
unsigned char arr_5 [15] [15] [15] [15] ;
signed char arr_7 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_9 [15] [15] [15] [15] ;
unsigned int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3529990038U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 11750684904058637947ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)-80 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 484547826072107476ULL : 11708763495478400217ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 4155002966U : 2859181244U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
