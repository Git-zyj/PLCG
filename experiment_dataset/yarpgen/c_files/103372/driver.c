#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 572804318U;
long long int var_3 = 3496963142811633431LL;
unsigned int var_7 = 4248077198U;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)27171;
int var_14 = -1125152704;
int zero = 0;
unsigned int var_16 = 254258969U;
unsigned char var_17 = (unsigned char)110;
signed char var_18 = (signed char)0;
unsigned char var_19 = (unsigned char)193;
unsigned char arr_2 [13] [13] [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)31891;
}

void checksum() {
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
