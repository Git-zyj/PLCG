#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)151;
unsigned int var_3 = 1499187354U;
unsigned char var_4 = (unsigned char)253;
unsigned short var_5 = (unsigned short)18258;
unsigned int var_6 = 2797528045U;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)231;
int var_13 = -483131457;
int var_14 = 1715976520;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1367475529U;
unsigned char var_17 = (unsigned char)59;
unsigned int var_18 = 3411897768U;
unsigned char var_19 = (unsigned char)78;
short arr_1 [14] [14] ;
_Bool arr_2 [14] [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25706;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 4278695762U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
