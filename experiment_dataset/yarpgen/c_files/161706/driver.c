#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13250;
unsigned char var_2 = (unsigned char)84;
short var_3 = (short)29953;
short var_6 = (short)-4409;
unsigned short var_9 = (unsigned short)64874;
long long int var_10 = 808843772796549029LL;
long long int var_12 = 2589391265079852537LL;
unsigned int var_13 = 380377720U;
unsigned short var_15 = (unsigned short)1841;
long long int var_16 = -6570052139566699362LL;
short var_17 = (short)-15117;
int zero = 0;
int var_18 = -63305871;
int var_19 = 693632818;
unsigned short var_20 = (unsigned short)44487;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13129100398858524553ULL;
short var_23 = (short)18837;
unsigned short var_24 = (unsigned short)45714;
unsigned char arr_0 [24] ;
unsigned char arr_1 [24] ;
_Bool arr_5 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4852674395771554405ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
