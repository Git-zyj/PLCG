#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5487694050781802612ULL;
unsigned long long int var_3 = 18310559580451230995ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 17841549232792694966ULL;
unsigned long long int var_13 = 9969685845369543524ULL;
unsigned short var_14 = (unsigned short)1594;
unsigned short var_15 = (unsigned short)38530;
int var_16 = -1188994574;
unsigned short var_17 = (unsigned short)10053;
int var_18 = 1241205803;
unsigned char var_19 = (unsigned char)30;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)27;
unsigned char arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
signed char arr_2 [23] ;
unsigned short arr_3 [15] ;
unsigned short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 4895525452075009133ULL : 9024604620812191961ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)23867;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)14664;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
