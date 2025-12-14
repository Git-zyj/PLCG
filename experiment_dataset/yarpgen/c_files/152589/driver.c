#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
int var_1 = 1951565925;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)35482;
unsigned int var_8 = 3758405231U;
short var_9 = (short)26058;
unsigned char var_12 = (unsigned char)47;
short var_16 = (short)11770;
unsigned int var_17 = 26765129U;
int zero = 0;
unsigned char var_18 = (unsigned char)140;
short var_19 = (short)1675;
short var_20 = (short)24349;
unsigned short arr_3 [22] ;
unsigned char arr_5 [22] [22] ;
unsigned short arr_6 [22] ;
signed char arr_7 [22] ;
int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)46484;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)131 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)60430;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)20 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -272180518 : 1816169821;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
