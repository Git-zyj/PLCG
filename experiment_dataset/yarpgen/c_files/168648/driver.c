#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36947;
unsigned long long int var_1 = 13977924981184444481ULL;
unsigned long long int var_8 = 6258631014042993350ULL;
unsigned long long int var_11 = 8258286161920347118ULL;
long long int var_13 = 6690471222547326578LL;
signed char var_14 = (signed char)121;
int zero = 0;
long long int var_17 = -2753673632342000325LL;
unsigned long long int var_18 = 7004457367640268985ULL;
long long int var_19 = -5064676399496785354LL;
short var_20 = (short)8094;
_Bool var_21 = (_Bool)1;
short arr_1 [13] [13] ;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)7278;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)159;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
