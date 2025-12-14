#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
long long int var_4 = 5974505642732199719LL;
long long int var_5 = -7020604997878104634LL;
unsigned int var_6 = 2914229490U;
unsigned int var_7 = 1601243943U;
unsigned int var_8 = 3724956484U;
unsigned char var_11 = (unsigned char)184;
long long int var_14 = -3207605997979561515LL;
unsigned char var_17 = (unsigned char)137;
int zero = 0;
long long int var_19 = 7545283231046003230LL;
unsigned char var_20 = (unsigned char)127;
unsigned char var_21 = (unsigned char)205;
unsigned int var_22 = 2028985985U;
unsigned char var_23 = (unsigned char)201;
unsigned int arr_0 [24] ;
unsigned short arr_2 [24] ;
long long int arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2778015270U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)65326;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1405982100774294318LL : -4961145022937744680LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
