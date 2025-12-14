#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)50383;
unsigned int var_4 = 1663697696U;
int var_6 = -1816223212;
unsigned short var_8 = (unsigned short)57350;
long long int var_13 = 4501189116529634276LL;
int var_15 = -1298959505;
int zero = 0;
unsigned int var_16 = 1675512488U;
short var_17 = (short)-24822;
unsigned char var_18 = (unsigned char)61;
unsigned int var_19 = 1543041575U;
short var_20 = (short)-6349;
short arr_1 [12] ;
unsigned int arr_3 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)21195;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 964431916U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)27891;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
