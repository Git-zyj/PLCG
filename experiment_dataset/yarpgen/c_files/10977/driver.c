#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51639;
_Bool var_1 = (_Bool)0;
long long int var_2 = 7659329661662924742LL;
short var_3 = (short)13827;
long long int var_4 = -1313084079378977601LL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)76;
unsigned short var_9 = (unsigned short)11302;
long long int var_10 = -8833193325930900989LL;
short var_11 = (short)2347;
unsigned char var_12 = (unsigned char)108;
int zero = 0;
unsigned short var_13 = (unsigned short)34163;
unsigned short var_14 = (unsigned short)8626;
long long int var_15 = -1333155903233679808LL;
_Bool arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)10934 : (unsigned short)7199;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
