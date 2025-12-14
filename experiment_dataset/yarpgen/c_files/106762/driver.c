#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)6630;
long long int var_5 = 4116921233333602068LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12551007379753421311ULL;
unsigned int var_11 = 1291909233U;
int var_13 = 841776311;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2700993164U;
long long int var_17 = -7548387706336617146LL;
signed char var_18 = (signed char)31;
unsigned short var_19 = (unsigned short)35509;
signed char arr_2 [10] [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned short arr_4 [10] [10] [10] ;
short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 4525278078686684513ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)30053;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)22516;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
