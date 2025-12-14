#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8632;
unsigned int var_2 = 3802228377U;
signed char var_5 = (signed char)10;
unsigned int var_6 = 987642207U;
unsigned char var_7 = (unsigned char)2;
int zero = 0;
unsigned char var_14 = (unsigned char)10;
signed char var_15 = (signed char)104;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-41;
signed char var_18 = (signed char)27;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] ;
short arr_2 [25] [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3850068954U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 6865182122741779963ULL;
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
