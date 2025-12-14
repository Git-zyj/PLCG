#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned short var_2 = (unsigned short)64664;
unsigned long long int var_3 = 17072186980981195444ULL;
unsigned char var_6 = (unsigned char)122;
short var_8 = (short)19024;
unsigned char var_10 = (unsigned char)69;
unsigned long long int var_17 = 8482366995969017980ULL;
unsigned int var_18 = 328765576U;
int var_19 = 527453052;
int zero = 0;
unsigned char var_20 = (unsigned char)188;
unsigned char var_21 = (unsigned char)153;
unsigned char var_22 = (unsigned char)205;
unsigned char var_23 = (unsigned char)129;
int var_24 = -1828329301;
int var_25 = 823219165;
unsigned int var_26 = 4143463649U;
unsigned char arr_4 [24] [24] ;
unsigned long long int arr_16 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)244 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1556873736942293077ULL : 17385888915747678362ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
