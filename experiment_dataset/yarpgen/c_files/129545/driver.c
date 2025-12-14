#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 167143335592460527ULL;
unsigned short var_3 = (unsigned short)48077;
int var_5 = 1225565879;
int var_7 = 1113910080;
unsigned short var_10 = (unsigned short)34753;
int zero = 0;
unsigned int var_19 = 3916748373U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)169;
signed char arr_0 [15] ;
unsigned int arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1559323738U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)5295;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 10612636126530803401ULL;
}

void checksum() {
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
