#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
long long int var_1 = 7005839957967827965LL;
unsigned int var_2 = 281910693U;
long long int var_3 = -2175500391288558019LL;
int var_4 = 1600802057;
int var_6 = -1857043466;
unsigned long long int var_7 = 11909964345638102468ULL;
long long int var_8 = -8530550435521233745LL;
long long int var_9 = 8037735585891016281LL;
unsigned int var_10 = 2641197274U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 265011641U;
int zero = 0;
unsigned char var_14 = (unsigned char)2;
unsigned char var_15 = (unsigned char)43;
long long int var_16 = 1856170265058614272LL;
long long int var_17 = 2272069089844341825LL;
unsigned long long int var_18 = 11163098870545470293ULL;
signed char arr_0 [16] ;
unsigned short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12806 : (unsigned short)38409;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
