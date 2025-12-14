#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58889;
long long int var_3 = 741950254011155616LL;
unsigned char var_5 = (unsigned char)179;
unsigned short var_8 = (unsigned short)12311;
unsigned long long int var_10 = 14917716530672002664ULL;
short var_11 = (short)-30729;
_Bool var_12 = (_Bool)1;
int var_13 = -372479480;
unsigned short var_15 = (unsigned short)6030;
int zero = 0;
short var_17 = (short)5347;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11524850432050790175ULL;
unsigned short var_20 = (unsigned short)51527;
unsigned char var_21 = (unsigned char)192;
long long int arr_1 [11] [11] ;
_Bool arr_2 [11] [11] ;
int arr_3 [11] ;
int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -4426574833322526768LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1163484779;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 891437223;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
