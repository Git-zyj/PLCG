#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35152;
int var_1 = 1825385621;
unsigned short var_2 = (unsigned short)24896;
int var_3 = 1753733019;
unsigned long long int var_5 = 9012093966364981839ULL;
signed char var_6 = (signed char)-79;
unsigned long long int var_7 = 3414557332423569526ULL;
signed char var_8 = (signed char)-101;
long long int var_9 = 3917431930352007872LL;
short var_10 = (short)-11138;
signed char var_12 = (signed char)28;
int zero = 0;
unsigned int var_13 = 3921699316U;
unsigned short var_14 = (unsigned short)12516;
unsigned long long int var_15 = 13237710548612887889ULL;
long long int var_16 = 6678063437661254606LL;
unsigned long long int var_17 = 8913069199201033629ULL;
unsigned char arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 13011350209756712975ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4542316973544113634LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
