#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4945856858211567790ULL;
unsigned char var_1 = (unsigned char)252;
short var_2 = (short)25651;
short var_4 = (short)8632;
unsigned char var_5 = (unsigned char)223;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)86;
short var_10 = (short)18376;
long long int var_11 = 1130808287763764592LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 44438039U;
unsigned int var_15 = 265011491U;
unsigned long long int var_16 = 14011804934069285583ULL;
short var_17 = (short)-3422;
unsigned char arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)25 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 16314185508900351918ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 28659142U : 3390913551U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
