#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -832833657;
unsigned short var_1 = (unsigned short)51822;
unsigned long long int var_2 = 7217020875309127003ULL;
long long int var_3 = -4749075463403116234LL;
short var_5 = (short)9604;
unsigned long long int var_6 = 12869487210726046773ULL;
unsigned int var_10 = 1624282876U;
int zero = 0;
unsigned int var_12 = 3159470495U;
int var_13 = -357825159;
int var_14 = -1885278113;
unsigned int var_15 = 1424948951U;
unsigned int var_16 = 1123835342U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2090561140U;
short var_19 = (short)26526;
unsigned int var_20 = 2516221466U;
unsigned short var_21 = (unsigned short)27751;
unsigned long long int arr_0 [14] [14] ;
unsigned char arr_2 [12] [12] ;
_Bool arr_5 [12] ;
unsigned int arr_6 [15] [15] ;
_Bool arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 9629017708726913537ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 1004055475U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
