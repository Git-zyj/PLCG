#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7504337259355948989LL;
unsigned int var_5 = 2349128253U;
unsigned long long int var_8 = 15564451140853908053ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1463408176;
_Bool var_14 = (_Bool)0;
int var_16 = 996829551;
int zero = 0;
unsigned int var_17 = 3647270697U;
short var_18 = (short)12503;
int var_19 = 1898403920;
unsigned short arr_0 [18] [18] ;
long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)1644;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -7940262901742845880LL;
}

void checksum() {
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
