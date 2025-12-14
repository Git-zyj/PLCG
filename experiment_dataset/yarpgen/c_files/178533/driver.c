#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30360;
unsigned int var_1 = 4080684942U;
signed char var_5 = (signed char)-75;
unsigned short var_11 = (unsigned short)38239;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-62;
unsigned int var_14 = 2718389838U;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
long long int var_16 = 8590887194992522019LL;
unsigned long long int var_17 = 708134517208757804ULL;
signed char var_18 = (signed char)25;
_Bool arr_2 [17] ;
signed char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-101;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
