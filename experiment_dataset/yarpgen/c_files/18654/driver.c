#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
unsigned short var_2 = (unsigned short)18510;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 4092811345U;
unsigned int var_9 = 106897723U;
unsigned long long int var_10 = 14441980220054658865ULL;
unsigned long long int var_11 = 16648168685467236765ULL;
int zero = 0;
signed char var_13 = (signed char)-28;
unsigned long long int var_14 = 5673693358173789082ULL;
short var_15 = (short)-20482;
signed char var_16 = (signed char)40;
unsigned int var_17 = 1238934533U;
signed char arr_0 [16] ;
unsigned int arr_2 [16] ;
short arr_3 [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3688251737U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)28734;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
