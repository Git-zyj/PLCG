#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 858898071U;
int var_3 = -1452945342;
signed char var_4 = (signed char)39;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-22;
int var_9 = 1035583086;
int zero = 0;
unsigned short var_10 = (unsigned short)39903;
unsigned long long int var_11 = 14860491361141438841ULL;
unsigned int var_12 = 1404343434U;
int var_13 = -70175112;
short var_14 = (short)10003;
unsigned char var_15 = (unsigned char)27;
unsigned short var_16 = (unsigned short)39235;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2279533389U;
unsigned char var_19 = (unsigned char)133;
unsigned long long int arr_2 [24] [24] ;
unsigned short arr_4 [24] [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 10948495997617993536ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)23230;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 8876020085780385056ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
