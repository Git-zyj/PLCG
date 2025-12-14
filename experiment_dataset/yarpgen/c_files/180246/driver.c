#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65445;
unsigned long long int var_4 = 16388064438514626736ULL;
unsigned long long int var_5 = 13225221311112900189ULL;
signed char var_6 = (signed char)8;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-51;
int zero = 0;
signed char var_12 = (signed char)-92;
unsigned char var_13 = (unsigned char)113;
short var_14 = (short)11635;
unsigned long long int var_15 = 4382462167306834692ULL;
unsigned short arr_0 [21] ;
signed char arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned char arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)30643;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)135;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
