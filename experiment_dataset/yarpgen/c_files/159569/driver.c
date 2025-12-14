#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9693;
unsigned char var_1 = (unsigned char)174;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 284342044389218132ULL;
unsigned char var_4 = (unsigned char)87;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3034027491U;
short var_10 = (short)30767;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1695007709;
unsigned short var_13 = (unsigned short)47619;
signed char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-3;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
