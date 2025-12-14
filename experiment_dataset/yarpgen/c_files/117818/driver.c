#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
unsigned long long int var_4 = 14323395974494854884ULL;
short var_5 = (short)22389;
unsigned short var_10 = (unsigned short)8923;
int var_11 = 653497414;
unsigned short var_13 = (unsigned short)48788;
signed char var_15 = (signed char)-63;
int var_17 = 1707206180;
unsigned short var_18 = (unsigned short)7256;
int zero = 0;
signed char var_19 = (signed char)53;
short var_20 = (short)-3585;
unsigned short var_21 = (unsigned short)64918;
unsigned short var_22 = (unsigned short)43565;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)249;
unsigned long long int var_25 = 13358010100542516472ULL;
int arr_12 [17] [17] [17] ;
unsigned short arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -2137585639;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned short)11838;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
