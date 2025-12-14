#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4801419764455298197ULL;
int var_7 = -1273840358;
unsigned short var_8 = (unsigned short)29324;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1646369958U;
unsigned char var_17 = (unsigned char)240;
int zero = 0;
unsigned short var_19 = (unsigned short)44713;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)12820;
unsigned int var_22 = 649977465U;
_Bool arr_0 [21] [21] ;
short arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)1591;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
