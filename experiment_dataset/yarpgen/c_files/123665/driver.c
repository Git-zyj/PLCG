#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
signed char var_1 = (signed char)22;
long long int var_5 = 1695702184460148313LL;
unsigned short var_6 = (unsigned short)64354;
signed char var_7 = (signed char)101;
unsigned short var_8 = (unsigned short)30623;
int zero = 0;
unsigned short var_12 = (unsigned short)63649;
signed char var_13 = (signed char)-65;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1179605440U;
signed char var_16 = (signed char)-121;
unsigned short var_17 = (unsigned short)29124;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
short arr_2 [24] ;
_Bool arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 952050116731834701ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 11843205953763829604ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)17073;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
