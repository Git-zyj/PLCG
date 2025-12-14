#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4155285937U;
unsigned long long int var_4 = 5939529975140559595ULL;
unsigned char var_5 = (unsigned char)173;
_Bool var_7 = (_Bool)1;
long long int var_10 = 4985375637404095378LL;
unsigned long long int var_12 = 16943715933897257670ULL;
int zero = 0;
short var_13 = (short)-5234;
signed char var_14 = (signed char)-20;
short var_15 = (short)-3265;
unsigned int var_16 = 1398394992U;
unsigned char var_17 = (unsigned char)88;
_Bool arr_0 [22] ;
int arr_3 [22] [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1091006712;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 2085001502U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
