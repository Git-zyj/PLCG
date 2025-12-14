#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2577998773U;
long long int var_6 = 5547567074346124870LL;
unsigned char var_7 = (unsigned char)196;
short var_8 = (short)31132;
unsigned short var_9 = (unsigned short)59045;
unsigned char var_10 = (unsigned char)80;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3633820876U;
unsigned char var_15 = (unsigned char)188;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5907182344283295411LL;
_Bool arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned char arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 4340190914798365878LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)249 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 145942153 : 1185269158;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
