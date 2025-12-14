#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2753589102964564688LL;
long long int var_2 = 1951710414297957902LL;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-29;
short var_9 = (short)19196;
int zero = 0;
long long int var_10 = 955502955516029482LL;
unsigned char var_11 = (unsigned char)183;
short var_12 = (short)-30755;
long long int var_13 = -8242720725020374288LL;
signed char var_14 = (signed char)-102;
signed char var_15 = (signed char)64;
signed char var_16 = (signed char)-45;
short arr_0 [21] [21] ;
short arr_1 [21] [21] ;
long long int arr_2 [21] [21] [21] ;
_Bool arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15248;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-15686;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -8903217573910852675LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
