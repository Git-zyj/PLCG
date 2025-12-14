#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1389314947;
short var_4 = (short)11058;
unsigned long long int var_5 = 4435625461878022122ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 16441855172707169647ULL;
short var_10 = (short)-17074;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3000540274U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4228059856278758178ULL;
unsigned int var_16 = 1694106845U;
unsigned short var_17 = (unsigned short)54462;
short var_18 = (short)907;
short var_19 = (short)27519;
int arr_1 [11] ;
unsigned int arr_2 [11] ;
signed char arr_5 [11] [11] [11] ;
int arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1770017378;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2106680906U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1620718653;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
