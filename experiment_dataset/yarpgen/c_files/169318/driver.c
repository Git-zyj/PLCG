#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 688205344U;
int var_2 = -1124736152;
long long int var_3 = -5265625258533952782LL;
signed char var_4 = (signed char)29;
unsigned long long int var_6 = 7186248229824636771ULL;
int var_8 = 1844600517;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)13790;
unsigned short var_12 = (unsigned short)2412;
int var_15 = -499431639;
int zero = 0;
unsigned short var_16 = (unsigned short)42057;
unsigned char var_17 = (unsigned char)188;
unsigned short var_18 = (unsigned short)1432;
long long int var_19 = -2517833400966440746LL;
long long int var_20 = -2402175282758247325LL;
_Bool var_21 = (_Bool)1;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)134 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2247197098U : 3687150454U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39818 : (unsigned short)53644;
}

void checksum() {
    hash(&seed, var_16);
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
