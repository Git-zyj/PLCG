#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41385;
signed char var_3 = (signed char)93;
int var_4 = -402188383;
unsigned int var_5 = 2048315275U;
unsigned long long int var_6 = 6498463745410222112ULL;
unsigned int var_8 = 2157027344U;
unsigned int var_16 = 15728514U;
int var_17 = -1162688046;
signed char var_19 = (signed char)67;
int zero = 0;
unsigned char var_20 = (unsigned char)248;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2844127548U;
unsigned char var_23 = (unsigned char)59;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 15780722497392973397ULL;
short arr_0 [16] ;
int arr_2 [16] ;
unsigned short arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-8004;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -41731899;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)62215;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
