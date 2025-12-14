#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8557168628510263760ULL;
short var_1 = (short)8802;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)180;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)24;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)12171;
unsigned short var_13 = (unsigned short)18383;
unsigned int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 7272679U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
