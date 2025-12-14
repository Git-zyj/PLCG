#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3727830671U;
long long int var_2 = -7265674338439731594LL;
signed char var_3 = (signed char)-109;
signed char var_4 = (signed char)-108;
unsigned int var_5 = 1646816958U;
unsigned int var_9 = 82378111U;
int zero = 0;
unsigned short var_10 = (unsigned short)40687;
unsigned char var_11 = (unsigned char)131;
long long int var_12 = 4485395264963043480LL;
unsigned long long int var_13 = 17680873146999670386ULL;
unsigned short var_14 = (unsigned short)23824;
unsigned short var_15 = (unsigned short)28853;
unsigned int var_16 = 1325747189U;
int var_17 = -67378584;
short var_18 = (short)3397;
unsigned char arr_0 [24] [24] ;
int arr_1 [24] [24] ;
_Bool arr_2 [24] ;
_Bool arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -220256869;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
