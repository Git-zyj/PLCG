#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8697117909586690026LL;
unsigned long long int var_5 = 6171040334392329669ULL;
unsigned int var_9 = 3972121524U;
signed char var_17 = (signed char)-74;
int zero = 0;
short var_20 = (short)-20695;
unsigned char var_21 = (unsigned char)115;
unsigned long long int var_22 = 14227326351424577937ULL;
unsigned int arr_1 [25] ;
long long int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3989134881U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -2054908479701482022LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 10611900004977698908ULL : 11409150075018131728ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16822350691726284484ULL : 12624908333189920426ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
