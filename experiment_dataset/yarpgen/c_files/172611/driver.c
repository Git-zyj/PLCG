#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2045796329374992055LL;
int var_2 = 1940316590;
signed char var_4 = (signed char)89;
unsigned short var_6 = (unsigned short)31282;
unsigned int var_7 = 408379273U;
unsigned short var_8 = (unsigned short)52171;
unsigned long long int var_9 = 12128156752108491737ULL;
short var_16 = (short)6327;
int zero = 0;
long long int var_17 = -656348049753164279LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 9004658987888095123ULL;
unsigned long long int var_20 = 1956737729162312695ULL;
int arr_0 [12] [12] ;
int arr_1 [12] [12] ;
signed char arr_2 [12] ;
long long int arr_3 [12] ;
_Bool arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1894665179;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1149455676;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2959172898761147999LL : 1985652618557361453LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
