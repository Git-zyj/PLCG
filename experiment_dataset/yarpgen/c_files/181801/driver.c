#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2893526263U;
short var_1 = (short)-604;
unsigned short var_6 = (unsigned short)29211;
long long int var_7 = 2188165022088925324LL;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
unsigned long long int var_13 = 6777895306740242641ULL;
unsigned int var_14 = 1211688089U;
unsigned long long int var_15 = 15241354198344007756ULL;
unsigned short var_16 = (unsigned short)3067;
long long int var_17 = -121598500120013996LL;
unsigned int arr_0 [16] ;
int arr_1 [16] [16] ;
_Bool arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1680552738U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -1452863260;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
