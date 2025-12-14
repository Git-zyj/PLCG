#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-29522;
short var_4 = (short)20508;
unsigned char var_8 = (unsigned char)182;
int var_9 = 1647397586;
unsigned char var_10 = (unsigned char)84;
short var_11 = (short)-858;
unsigned long long int var_15 = 2704770674435491819ULL;
unsigned long long int var_16 = 8839849497060564543ULL;
unsigned char var_17 = (unsigned char)162;
unsigned short var_18 = (unsigned short)28651;
int zero = 0;
signed char var_19 = (signed char)113;
unsigned long long int var_20 = 15545571691796185184ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)118;
unsigned char var_23 = (unsigned char)99;
signed char var_24 = (signed char)101;
unsigned int var_25 = 4156616490U;
unsigned short var_26 = (unsigned short)20875;
short var_27 = (short)-7341;
short arr_0 [16] ;
unsigned int arr_1 [16] ;
_Bool arr_2 [16] ;
signed char arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-27005 : (short)28862;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2304286932U : 1026578221U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)29;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
