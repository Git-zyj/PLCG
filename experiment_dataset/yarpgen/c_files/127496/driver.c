#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2141130209U;
unsigned char var_3 = (unsigned char)234;
int var_4 = 1433141235;
unsigned int var_8 = 2934523874U;
unsigned short var_10 = (unsigned short)62481;
unsigned int var_11 = 1393807986U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-114;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned char arr_1 [14] ;
int arr_2 [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1100895221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -375212290;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
