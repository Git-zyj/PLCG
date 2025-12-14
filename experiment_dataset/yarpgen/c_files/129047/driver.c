#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7805999105232098717LL;
unsigned char var_1 = (unsigned char)48;
signed char var_3 = (signed char)-85;
signed char var_4 = (signed char)100;
unsigned short var_8 = (unsigned short)42856;
int var_9 = -1432002051;
int var_10 = 1869475468;
short var_12 = (short)14790;
int zero = 0;
int var_14 = 1472229160;
unsigned int var_15 = 74018614U;
unsigned short var_16 = (unsigned short)41922;
long long int var_17 = -8338863820848540144LL;
int arr_0 [12] ;
int arr_1 [12] ;
short arr_3 [12] ;
signed char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1003182076;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 753809208;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-5619;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-98 : (signed char)2;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
