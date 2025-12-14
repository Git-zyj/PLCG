#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16523;
short var_1 = (short)27021;
signed char var_2 = (signed char)78;
unsigned int var_3 = 104975470U;
signed char var_4 = (signed char)-98;
short var_5 = (short)-7780;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)63;
unsigned int var_8 = 2902090098U;
unsigned long long int var_9 = 8683409977887530834ULL;
int zero = 0;
unsigned long long int var_10 = 5555352709400347493ULL;
unsigned char var_11 = (unsigned char)189;
short var_12 = (short)14279;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-15615;
signed char var_15 = (signed char)15;
short var_16 = (short)20705;
short var_17 = (short)-19941;
int var_18 = -29790800;
unsigned short var_19 = (unsigned short)50797;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_1 [15] [15] ;
short arr_2 [15] ;
signed char arr_3 [15] ;
int arr_4 [15] [15] [15] ;
unsigned short arr_5 [15] [15] ;
_Bool arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 7185563575600236050ULL : 11486521583868691111ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)14952 : (short)775;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17570628 : -884170447;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)27512;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
