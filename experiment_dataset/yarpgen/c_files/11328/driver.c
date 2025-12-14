#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1464041328U;
int var_4 = -2058248364;
unsigned long long int var_6 = 9069229283520626885ULL;
unsigned int var_11 = 3055743602U;
int zero = 0;
unsigned short var_14 = (unsigned short)24727;
short var_15 = (short)5001;
long long int var_16 = -5782702836766429933LL;
long long int var_17 = 2843320413749493502LL;
unsigned int var_18 = 2514109616U;
short arr_4 [14] ;
int arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-23750;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1941962275;
}

void checksum() {
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
