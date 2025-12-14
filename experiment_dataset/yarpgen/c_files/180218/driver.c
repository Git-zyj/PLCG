#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8716971638944737472ULL;
short var_2 = (short)-23622;
unsigned char var_3 = (unsigned char)144;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)197;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)113;
unsigned int var_10 = 3748922518U;
unsigned long long int var_11 = 10791847458365822509ULL;
unsigned int var_12 = 4158545261U;
int zero = 0;
int var_13 = 138540058;
unsigned long long int var_14 = 859602403715927634ULL;
unsigned int var_15 = 2933540012U;
unsigned short var_16 = (unsigned short)36573;
short var_17 = (short)29135;
short var_18 = (short)-601;
unsigned short var_19 = (unsigned short)61424;
signed char arr_2 [10] [10] ;
unsigned int arr_3 [10] [10] [10] ;
unsigned char arr_4 [19] ;
_Bool arr_5 [19] ;
unsigned short arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1119594268U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)57004;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
