#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
long long int var_4 = 5156054363995670198LL;
unsigned short var_6 = (unsigned short)41369;
unsigned short var_7 = (unsigned short)657;
unsigned int var_9 = 2452951024U;
int var_11 = 823255343;
int zero = 0;
long long int var_12 = 8693632379665906067LL;
int var_13 = 1198581880;
short var_14 = (short)-6605;
unsigned short var_15 = (unsigned short)18153;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3325100373774075891ULL;
unsigned int var_18 = 2786056007U;
_Bool arr_0 [15] ;
_Bool arr_1 [15] ;
int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -177096416;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
