#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44661;
unsigned char var_2 = (unsigned char)43;
signed char var_4 = (signed char)-120;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1386903233637730897ULL;
unsigned char var_13 = (unsigned char)252;
unsigned long long int var_14 = 11156997175931765978ULL;
_Bool var_16 = (_Bool)0;
signed char var_18 = (signed char)82;
int zero = 0;
int var_19 = -1347645578;
long long int var_20 = -3386052921479188733LL;
int var_21 = -1211772438;
unsigned char var_22 = (unsigned char)60;
unsigned char var_23 = (unsigned char)221;
unsigned short var_24 = (unsigned short)30772;
unsigned int var_25 = 1694046230U;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] ;
long long int arr_2 [24] ;
unsigned int arr_3 [24] ;
unsigned long long int arr_4 [13] ;
long long int arr_6 [13] [13] ;
int arr_7 [13] [13] ;
int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)56307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)18059;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3911664220299885472LL : 1384126270812015117LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2196231422U : 1122693099U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 5205977297131705380ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -3730657766791512542LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 1697661427;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 709793233;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
