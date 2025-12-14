#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4977458253807670160LL;
unsigned short var_2 = (unsigned short)349;
unsigned char var_3 = (unsigned char)59;
unsigned int var_5 = 1743882986U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)25932;
int var_10 = 2110540179;
long long int var_12 = -4502815344440575224LL;
short var_14 = (short)-32414;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2549326559U;
short var_17 = (short)-6456;
unsigned char var_18 = (unsigned char)61;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)71;
short var_21 = (short)3602;
int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_3 [24] ;
_Bool arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] [24] [24] ;
unsigned char arr_6 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1423803544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2822736208085649290ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1797117320U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)11;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
