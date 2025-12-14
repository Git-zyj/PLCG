#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8312877777539505842LL;
long long int var_1 = -1660743800631421643LL;
unsigned char var_2 = (unsigned char)191;
long long int var_3 = 2354173569013950551LL;
unsigned char var_6 = (unsigned char)79;
unsigned char var_8 = (unsigned char)50;
unsigned short var_9 = (unsigned short)42382;
long long int var_10 = -2085846435528732783LL;
_Bool var_11 = (_Bool)0;
short var_13 = (short)26300;
int var_14 = -1714310649;
short var_15 = (short)-15204;
int zero = 0;
unsigned short var_16 = (unsigned short)26535;
unsigned int var_17 = 4082075756U;
unsigned char var_18 = (unsigned char)122;
unsigned int var_19 = 1995577236U;
unsigned short var_20 = (unsigned short)23688;
long long int var_21 = -3148743457887867176LL;
_Bool arr_1 [10] [10] ;
_Bool arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
