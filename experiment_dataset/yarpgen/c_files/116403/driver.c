#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1710948180768559988LL;
long long int var_2 = 7675113640566739966LL;
unsigned char var_3 = (unsigned char)113;
int var_4 = -424239549;
int var_6 = -907003992;
long long int var_7 = -8344379237374832511LL;
int var_13 = 1543736277;
int var_15 = -720982138;
unsigned long long int var_16 = 16974313254009208912ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)24322;
int zero = 0;
unsigned char var_19 = (unsigned char)231;
unsigned short var_20 = (unsigned short)19378;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 626452377793216956ULL;
long long int var_23 = -8714389129337505438LL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)98;
signed char var_26 = (signed char)-24;
_Bool var_27 = (_Bool)1;
unsigned long long int arr_0 [17] ;
unsigned char arr_4 [17] ;
long long int arr_9 [24] [24] ;
_Bool arr_12 [24] [24] [24] ;
long long int arr_13 [24] [24] [24] [24] ;
signed char arr_5 [17] ;
unsigned int arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 17720830302458257594ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 8545604929348890128LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 7694494871978324754LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 1106595888U : 358782042U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
