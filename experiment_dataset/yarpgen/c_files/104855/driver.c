#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-58;
unsigned int var_4 = 2890293094U;
unsigned long long int var_5 = 533633567927087319ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)3272;
int zero = 0;
unsigned long long int var_11 = 13008756162293999073ULL;
long long int var_12 = -3352865575677025711LL;
unsigned short var_13 = (unsigned short)43952;
_Bool var_14 = (_Bool)0;
signed char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)86;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
