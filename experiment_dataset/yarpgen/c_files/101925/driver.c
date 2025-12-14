#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1782007086;
unsigned short var_3 = (unsigned short)17539;
unsigned int var_4 = 3111675518U;
unsigned int var_5 = 942597742U;
short var_6 = (short)5822;
unsigned char var_7 = (unsigned char)160;
unsigned short var_8 = (unsigned short)18653;
unsigned char var_10 = (unsigned char)162;
unsigned char var_11 = (unsigned char)106;
unsigned short var_12 = (unsigned short)7209;
int zero = 0;
short var_13 = (short)-14528;
unsigned long long int var_14 = 12738120081305144922ULL;
unsigned short var_15 = (unsigned short)15418;
unsigned char var_16 = (unsigned char)64;
int var_17 = 1408561633;
unsigned int var_18 = 1120486588U;
int arr_1 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1415638648;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -3781108193852311925LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
