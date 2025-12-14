#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 638033420U;
int var_10 = -714747036;
int var_11 = -1309724022;
int var_12 = 1554303330;
_Bool var_13 = (_Bool)1;
int var_14 = 1252696766;
unsigned int var_15 = 3808950591U;
unsigned long long int var_16 = 15921471668648003576ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-109;
signed char var_19 = (signed char)9;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1545479129U;
long long int var_22 = 1127665607268252757LL;
unsigned char var_23 = (unsigned char)197;
short var_24 = (short)21707;
unsigned char arr_0 [13] ;
short arr_1 [13] [13] ;
signed char arr_2 [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-22425;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-7658;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
