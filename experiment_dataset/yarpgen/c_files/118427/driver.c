#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1715231083;
unsigned int var_3 = 2119152920U;
unsigned int var_4 = 3492456755U;
unsigned char var_5 = (unsigned char)9;
unsigned int var_6 = 899709257U;
unsigned long long int var_8 = 4281882889598364476ULL;
unsigned long long int var_9 = 12753645035943375795ULL;
short var_10 = (short)-2294;
_Bool var_11 = (_Bool)1;
short var_12 = (short)5200;
short var_13 = (short)20000;
int var_14 = -1385477722;
unsigned long long int var_15 = 6815496870979709644ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)27280;
long long int var_17 = -2555334794676333983LL;
unsigned char var_18 = (unsigned char)211;
signed char arr_1 [13] ;
unsigned int arr_2 [13] [13] [13] ;
_Bool arr_4 [13] [13] [13] ;
long long int arr_5 [13] ;
short arr_6 [13] ;
unsigned int arr_7 [13] ;
short arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 47593756U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 5659893699072688746LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)32626;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 1575588241U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-2906;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
