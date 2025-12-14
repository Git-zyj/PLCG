#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1871;
short var_1 = (short)14864;
unsigned short var_3 = (unsigned short)62752;
unsigned short var_6 = (unsigned short)64416;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)50;
unsigned short var_14 = (unsigned short)58947;
int zero = 0;
unsigned char var_17 = (unsigned char)42;
unsigned short var_18 = (unsigned short)19703;
unsigned long long int var_19 = 2947344722992129825ULL;
unsigned long long int arr_0 [20] ;
short arr_2 [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1777765212771973738ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)4562;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)215;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
