#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11081;
short var_3 = (short)32507;
unsigned short var_4 = (unsigned short)52012;
short var_7 = (short)26101;
unsigned int var_8 = 3411699011U;
unsigned long long int var_10 = 10842713438382281459ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)62;
unsigned char var_13 = (unsigned char)196;
short var_14 = (short)-19768;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1718590452U;
signed char arr_3 [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2150953039U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
