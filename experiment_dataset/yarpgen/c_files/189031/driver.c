#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1249698822304653527LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)26;
unsigned long long int var_7 = 9650350922204093623ULL;
long long int var_11 = 5968829878445446660LL;
signed char var_13 = (signed char)-125;
int zero = 0;
int var_16 = -1980688;
signed char var_17 = (signed char)102;
unsigned short var_18 = (unsigned short)61338;
unsigned int var_19 = 938824169U;
int var_20 = -1201555591;
unsigned int var_21 = 991529944U;
unsigned int arr_2 [18] [18] [18] ;
unsigned short arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] [18] [18] ;
unsigned short arr_6 [18] [18] ;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 693312952U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)21803;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2414912446U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)34586;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2578235066U;
}

void checksum() {
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
