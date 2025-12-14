#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
int var_1 = 1089491080;
int var_2 = 565288368;
int var_3 = 649937491;
unsigned char var_4 = (unsigned char)219;
unsigned int var_5 = 51620939U;
unsigned long long int var_6 = 9105934600095994295ULL;
unsigned char var_8 = (unsigned char)112;
int var_9 = -1232182249;
long long int var_10 = 4614473510735035014LL;
unsigned int var_11 = 3328457577U;
unsigned short var_12 = (unsigned short)14521;
unsigned int var_13 = 881344479U;
int zero = 0;
unsigned int var_14 = 1603180828U;
int var_15 = 959873435;
unsigned char var_16 = (unsigned char)64;
long long int var_17 = 1579960357440869764LL;
int var_18 = 1732137608;
unsigned char var_19 = (unsigned char)154;
int var_20 = 2095552997;
int var_21 = 1935982598;
int var_22 = 1790400903;
unsigned char arr_12 [20] [20] ;
int arr_13 [20] [20] ;
unsigned int arr_22 [20] [20] ;
int arr_23 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = -128040836;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 159288982U : 585921581U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = 2084435975;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
