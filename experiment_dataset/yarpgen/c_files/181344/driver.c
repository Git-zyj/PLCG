#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8972587569839558124LL;
unsigned int var_3 = 2494573746U;
int var_4 = 643133537;
unsigned short var_5 = (unsigned short)21933;
unsigned int var_10 = 483694095U;
unsigned long long int var_11 = 8806452068922778461ULL;
unsigned int var_12 = 2828934496U;
unsigned char var_13 = (unsigned char)13;
int zero = 0;
long long int var_15 = 5880516481332331523LL;
unsigned long long int var_16 = 188747008321965905ULL;
unsigned int var_17 = 1164551224U;
unsigned long long int var_18 = 963119683809779414ULL;
short var_19 = (short)-6975;
unsigned short var_20 = (unsigned short)31274;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1757155625U;
unsigned int arr_9 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1502392033U : 2234669238U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
