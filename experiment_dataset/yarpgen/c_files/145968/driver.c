#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60011;
unsigned int var_3 = 3604860616U;
short var_4 = (short)15398;
unsigned int var_6 = 4275424675U;
int var_7 = -1680454308;
signed char var_10 = (signed char)-70;
int zero = 0;
unsigned int var_11 = 2949151477U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-23;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)92;
_Bool arr_6 [16] ;
_Bool arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
