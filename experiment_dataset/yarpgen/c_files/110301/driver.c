#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-974;
long long int var_3 = -2532995248952316920LL;
short var_4 = (short)-27899;
signed char var_5 = (signed char)29;
short var_6 = (short)11701;
long long int var_7 = -6165739983557874850LL;
unsigned int var_8 = 950640645U;
long long int var_12 = -592457580838530354LL;
int zero = 0;
long long int var_14 = -8006693739019890706LL;
signed char var_15 = (signed char)-15;
int var_16 = 21008383;
unsigned int var_17 = 2021955378U;
short var_18 = (short)-5495;
short var_19 = (short)-9634;
short arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
long long int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-22084;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3538107812U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -8074918510397887652LL;
}

void checksum() {
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
