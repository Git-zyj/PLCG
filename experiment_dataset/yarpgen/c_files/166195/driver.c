#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13610710630926115160ULL;
short var_1 = (short)2136;
unsigned short var_2 = (unsigned short)878;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)104;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1973372822U;
unsigned long long int var_8 = 15250869690001613750ULL;
unsigned short var_9 = (unsigned short)17398;
int zero = 0;
unsigned char var_10 = (unsigned char)245;
unsigned int var_11 = 3865290453U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3939137932U;
signed char var_14 = (signed char)120;
signed char var_15 = (signed char)1;
signed char var_16 = (signed char)-20;
int var_17 = -1305341169;
unsigned short var_18 = (unsigned short)29713;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)11133;
unsigned char arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
_Bool arr_2 [11] [11] ;
long long int arr_6 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -8418356970382204700LL;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
