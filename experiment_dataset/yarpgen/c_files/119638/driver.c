#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27723;
unsigned int var_1 = 2800793604U;
short var_3 = (short)-25112;
int var_4 = 1385902807;
int var_7 = -189785738;
int var_8 = 1962493073;
signed char var_9 = (signed char)-22;
unsigned int var_10 = 939996319U;
int var_12 = -1695602296;
int zero = 0;
signed char var_13 = (signed char)-91;
int var_14 = -1475038698;
signed char var_15 = (signed char)9;
unsigned short var_16 = (unsigned short)23871;
signed char var_17 = (signed char)61;
short var_18 = (short)-19055;
short var_19 = (short)1404;
short arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
unsigned char arr_4 [24] ;
_Bool arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12370;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
