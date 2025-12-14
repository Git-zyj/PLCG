#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22423;
long long int var_5 = 984463982991269711LL;
int var_6 = 1140336083;
unsigned int var_9 = 3151726263U;
int zero = 0;
signed char var_14 = (signed char)-13;
int var_15 = -1589954091;
unsigned char var_16 = (unsigned char)123;
unsigned long long int var_17 = 14131259350509661137ULL;
short var_18 = (short)-15897;
signed char var_19 = (signed char)-118;
signed char var_20 = (signed char)-83;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)48205;
unsigned int var_23 = 2334363596U;
short var_24 = (short)-17401;
unsigned int arr_0 [13] [13] ;
_Bool arr_1 [13] ;
signed char arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 2937906635U : 1971026748U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)53;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
