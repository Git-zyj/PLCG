#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3281;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-7926;
signed char var_7 = (signed char)45;
unsigned long long int var_8 = 8042925900234774670ULL;
unsigned short var_11 = (unsigned short)22222;
unsigned short var_14 = (unsigned short)23480;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-10903;
unsigned char var_18 = (unsigned char)22;
unsigned char var_19 = (unsigned char)83;
unsigned long long int var_20 = 6358113376717531059ULL;
long long int var_21 = -1186635842080565872LL;
short var_22 = (short)5640;
signed char arr_0 [20] [20] ;
signed char arr_4 [20] [20] ;
unsigned int arr_7 [20] [20] [20] ;
unsigned char arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3378704926U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)35 : (unsigned char)151;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
