#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6575;
long long int var_3 = 6229174883384666511LL;
unsigned int var_4 = 369481912U;
unsigned int var_7 = 3334898103U;
unsigned short var_10 = (unsigned short)58384;
long long int var_11 = -1650828383786467906LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_20 = -9036431725794487488LL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)79;
unsigned long long int var_23 = 1809169433377524341ULL;
unsigned short var_24 = (unsigned short)7908;
unsigned int arr_0 [15] [15] ;
short arr_3 [15] [15] ;
unsigned int arr_4 [15] ;
unsigned int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3949583849U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-27298;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 852374542U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 264585607U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
