#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
signed char var_4 = (signed char)-1;
unsigned int var_6 = 1178853919U;
int var_7 = 45215931;
short var_8 = (short)-7986;
unsigned int var_9 = 2984724640U;
int zero = 0;
unsigned short var_10 = (unsigned short)10375;
unsigned char var_11 = (unsigned char)187;
unsigned long long int var_12 = 5037643113748599258ULL;
long long int var_13 = -346495632933168609LL;
_Bool var_14 = (_Bool)1;
unsigned char arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)167;
}

void checksum() {
    hash(&seed, var_10);
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
