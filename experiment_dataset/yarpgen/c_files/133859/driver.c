#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1415987557U;
int var_2 = -571324715;
unsigned int var_3 = 2186313854U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)21318;
long long int var_10 = -1026904653018880658LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3687046195U;
unsigned int var_13 = 599643346U;
unsigned char var_14 = (unsigned char)3;
_Bool arr_0 [10] [10] ;
unsigned int arr_3 [10] ;
unsigned char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3816867180U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)189;
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
