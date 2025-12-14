#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2265;
unsigned long long int var_5 = 5290233368285191903ULL;
unsigned short var_6 = (unsigned short)30522;
unsigned int var_7 = 4145182576U;
unsigned int var_8 = 2762741398U;
short var_9 = (short)29529;
signed char var_14 = (signed char)-66;
int zero = 0;
unsigned int var_16 = 3888174487U;
long long int var_17 = 1128966681262272681LL;
unsigned char var_18 = (unsigned char)171;
int var_19 = 972873866;
int var_20 = -1608532297;
_Bool var_21 = (_Bool)0;
long long int var_22 = 5264226739883636545LL;
signed char var_23 = (signed char)32;
_Bool arr_0 [16] ;
unsigned char arr_1 [16] ;
unsigned short arr_2 [16] ;
long long int arr_7 [16] [16] [16] ;
signed char arr_11 [22] [22] ;
_Bool arr_13 [22] [22] ;
short arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)51427;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2773814010739851784LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-7159 : (short)-27177;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
