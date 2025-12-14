#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31495;
signed char var_1 = (signed char)94;
signed char var_4 = (signed char)45;
int var_6 = 178975635;
unsigned short var_9 = (unsigned short)17251;
unsigned long long int var_17 = 17772644461651923669ULL;
int zero = 0;
unsigned int var_19 = 4205952925U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11962945266101398848ULL;
unsigned long long int var_22 = 15421985287931455922ULL;
short var_23 = (short)9185;
signed char arr_0 [23] ;
short arr_1 [23] [23] ;
long long int arr_4 [23] ;
_Bool arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)9711;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7533769570009400915LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
