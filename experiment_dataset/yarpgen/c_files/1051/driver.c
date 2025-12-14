#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1387123607;
signed char var_3 = (signed char)127;
unsigned char var_5 = (unsigned char)237;
long long int var_7 = 3019034011909095467LL;
int zero = 0;
unsigned int var_15 = 990976311U;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4577192295500833404LL;
short var_18 = (short)31940;
long long int var_19 = 2505521882507892581LL;
_Bool arr_1 [13] ;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)189;
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
