#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-77;
unsigned long long int var_9 = 15429908762127446343ULL;
unsigned short var_17 = (unsigned short)16302;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-121;
unsigned long long int var_20 = 14565372675090634807ULL;
unsigned long long int var_21 = 7071227805619335820ULL;
unsigned short var_22 = (unsigned short)24386;
long long int var_23 = 4381160860178923757LL;
unsigned char var_24 = (unsigned char)130;
unsigned short var_25 = (unsigned short)2196;
unsigned short var_26 = (unsigned short)27068;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned short arr_2 [25] ;
signed char arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3048217914U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)35311;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)6;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
