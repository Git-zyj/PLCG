#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 251902935629819417LL;
unsigned short var_1 = (unsigned short)41862;
signed char var_3 = (signed char)19;
unsigned short var_4 = (unsigned short)60800;
int var_5 = -1229624300;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3288125957U;
int zero = 0;
long long int var_11 = 1966123875080594811LL;
unsigned int var_12 = 2919117531U;
short var_13 = (short)-12493;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)33420;
long long int var_16 = -2351898466281986179LL;
short var_17 = (short)-13484;
long long int var_18 = 4419152333352642495LL;
unsigned int arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
int arr_5 [23] [23] ;
unsigned int arr_9 [23] ;
unsigned char arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 4239145730U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4286274531U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 267422373;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1815657203U : 1804362264U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)73;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
