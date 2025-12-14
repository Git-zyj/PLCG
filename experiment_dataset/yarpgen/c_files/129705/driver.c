#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1109307336;
int var_2 = -1495058026;
_Bool var_4 = (_Bool)0;
long long int var_7 = 6893538363706567881LL;
unsigned int var_9 = 3878782349U;
unsigned short var_11 = (unsigned short)65227;
unsigned short var_14 = (unsigned short)17065;
long long int var_18 = 4447591132183864859LL;
int zero = 0;
long long int var_19 = 9087642993831709881LL;
signed char var_20 = (signed char)40;
unsigned char var_21 = (unsigned char)42;
unsigned char var_22 = (unsigned char)39;
signed char arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned char arr_6 [11] ;
long long int arr_7 [11] ;
unsigned char arr_8 [11] ;
unsigned long long int arr_4 [11] ;
unsigned long long int arr_5 [11] [11] ;
long long int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 4252866991U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 9149974365220549190LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 8319203531703591279ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 810143435169424264ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = -6816569521029106531LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
