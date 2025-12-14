#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1375433343;
unsigned int var_3 = 1247393522U;
signed char var_4 = (signed char)69;
unsigned char var_5 = (unsigned char)148;
unsigned char var_6 = (unsigned char)242;
signed char var_9 = (signed char)91;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)152;
int var_12 = 384118027;
short var_13 = (short)26377;
signed char var_14 = (signed char)120;
unsigned int var_15 = 3935949656U;
unsigned int var_16 = 3048768563U;
int zero = 0;
signed char var_17 = (signed char)-10;
signed char var_18 = (signed char)58;
signed char var_19 = (signed char)-119;
signed char var_20 = (signed char)-25;
unsigned long long int var_21 = 2187534928285618434ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_0 [17] ;
int arr_1 [17] ;
signed char arr_3 [17] [17] ;
signed char arr_4 [17] [17] [17] ;
unsigned long long int arr_7 [18] ;
signed char arr_8 [18] ;
int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1698704850808490477ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 241288004;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 11186093135498627022ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 898011331;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
