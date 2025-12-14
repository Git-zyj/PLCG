#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4191;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)50542;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)42303;
long long int var_9 = 2721451388467979061LL;
int zero = 0;
unsigned short var_10 = (unsigned short)1513;
unsigned long long int var_11 = 15060369121831172099ULL;
unsigned char var_12 = (unsigned char)118;
int var_13 = -197830038;
long long int var_14 = -8596803170077145299LL;
long long int var_15 = -6954693365467730041LL;
unsigned long long int var_16 = 10423850628112404962ULL;
unsigned int var_17 = 3561587741U;
unsigned int arr_0 [16] ;
short arr_1 [16] [16] ;
unsigned long long int arr_4 [16] [16] [16] ;
short arr_7 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1836401638U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21994;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3234027728237648775ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)15001;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
