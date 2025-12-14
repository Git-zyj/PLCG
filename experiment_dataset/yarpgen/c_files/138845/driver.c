#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1025561661U;
long long int var_6 = -4920178533828543129LL;
unsigned long long int var_7 = 18290825721904730174ULL;
unsigned char var_9 = (unsigned char)82;
int zero = 0;
long long int var_19 = -9113169042612330060LL;
unsigned int var_20 = 517606518U;
long long int var_21 = -1212631106359193004LL;
unsigned long long int var_22 = 16289545233423601830ULL;
unsigned short var_23 = (unsigned short)51976;
unsigned long long int var_24 = 13761492725821202213ULL;
_Bool var_25 = (_Bool)0;
short arr_0 [16] ;
short arr_3 [16] ;
long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)4389 : (short)-12216;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-27027;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -5361619808297937040LL : -4006600449244148027LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
