#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)49;
signed char var_3 = (signed char)64;
unsigned short var_4 = (unsigned short)55109;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)44500;
int zero = 0;
int var_15 = 2053497454;
unsigned long long int var_16 = 12020735201868721085ULL;
int var_17 = -477892801;
unsigned long long int var_18 = 8032290570124481159ULL;
short arr_0 [24] ;
unsigned short arr_1 [24] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)7756;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)23713;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
