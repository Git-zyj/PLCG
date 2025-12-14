#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43168;
unsigned short var_6 = (unsigned short)21173;
unsigned long long int var_9 = 11007165998538713624ULL;
unsigned short var_10 = (unsigned short)56437;
long long int var_12 = 1620836475073624331LL;
unsigned int var_13 = 680036144U;
int zero = 0;
unsigned long long int var_14 = 6136347672174552740ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)9734;
long long int arr_1 [18] ;
short arr_3 [18] [18] ;
unsigned long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -2363581039105773632LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22012;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 4909710808934131362ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
