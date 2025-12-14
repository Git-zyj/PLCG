#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1411391042;
short var_4 = (short)-7318;
int var_7 = -1747035843;
int var_9 = 711141053;
signed char var_11 = (signed char)62;
short var_12 = (short)-397;
int var_13 = 1223996080;
unsigned char var_14 = (unsigned char)223;
int zero = 0;
short var_16 = (short)6061;
long long int var_17 = -7146558405206602140LL;
short var_18 = (short)-16205;
short var_19 = (short)19844;
unsigned char var_20 = (unsigned char)38;
int arr_0 [21] ;
short arr_3 [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1258894201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)2637;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5424661959549694216ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1425893705U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
