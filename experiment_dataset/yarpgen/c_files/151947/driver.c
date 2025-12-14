#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 538377317U;
unsigned int var_4 = 4225250289U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)196;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-93;
signed char var_17 = (signed char)80;
int zero = 0;
unsigned int var_19 = 1211177914U;
int var_20 = 885547812;
unsigned char var_21 = (unsigned char)186;
unsigned short var_22 = (unsigned short)19421;
unsigned int var_23 = 1513442624U;
unsigned char var_24 = (unsigned char)163;
int arr_4 [11] [11] [11] ;
short arr_8 [11] ;
long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -918097696;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (short)-14448;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 6391587876273256530LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
