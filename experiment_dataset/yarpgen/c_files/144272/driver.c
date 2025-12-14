#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 909865737U;
signed char var_3 = (signed char)88;
unsigned char var_4 = (unsigned char)30;
_Bool var_6 = (_Bool)0;
int var_7 = 1458069675;
long long int var_8 = -708853510838521617LL;
int var_10 = 628509715;
int var_12 = 574747628;
int zero = 0;
short var_18 = (short)12266;
unsigned short var_19 = (unsigned short)34186;
unsigned int var_20 = 296977324U;
unsigned long long int var_21 = 6469668073351185289ULL;
unsigned long long int var_22 = 7117062708784679517ULL;
unsigned short arr_0 [16] [16] ;
int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)54889;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -49515034;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
