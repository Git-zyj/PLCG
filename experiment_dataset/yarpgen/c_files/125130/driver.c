#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 490261036;
signed char var_2 = (signed char)-59;
short var_4 = (short)-26844;
int var_8 = -258400161;
signed char var_9 = (signed char)-52;
_Bool var_11 = (_Bool)1;
long long int var_14 = -8572614797875361281LL;
short var_16 = (short)9792;
int zero = 0;
signed char var_17 = (signed char)-12;
unsigned char var_18 = (unsigned char)106;
long long int var_19 = -8969544552607175872LL;
unsigned char var_20 = (unsigned char)92;
signed char var_21 = (signed char)87;
unsigned char var_22 = (unsigned char)102;
unsigned int arr_7 [16] ;
unsigned long long int arr_3 [21] ;
int arr_4 [21] [21] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 2699065275U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1088033739512656580ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -406754898;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 13515168650006042177ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
