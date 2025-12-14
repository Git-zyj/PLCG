#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1989130337U;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)48582;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 692691359U;
unsigned long long int var_6 = 15852034512049424552ULL;
int var_7 = -301091636;
unsigned char var_8 = (unsigned char)119;
int var_10 = 1683041627;
unsigned int var_11 = 4132900787U;
short var_12 = (short)13108;
unsigned int var_13 = 2818912392U;
unsigned char var_14 = (unsigned char)247;
int zero = 0;
unsigned int var_15 = 3158277175U;
unsigned int var_16 = 372891814U;
unsigned short var_17 = (unsigned short)30725;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6460559726546011296LL;
short var_20 = (short)11372;
_Bool arr_0 [17] ;
unsigned char arr_2 [17] ;
unsigned short arr_5 [17] ;
unsigned long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)56818;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 16628705113586406034ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
