#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
unsigned long long int var_8 = 5794403029607807939ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 14108943737224676689ULL;
unsigned long long int var_11 = 5616661230544740150ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8416168858077287393LL;
unsigned short var_14 = (unsigned short)15889;
unsigned char arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5002792138779272950ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 530262835U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
