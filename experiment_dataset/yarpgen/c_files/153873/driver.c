#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1362086796;
unsigned char var_4 = (unsigned char)52;
unsigned long long int var_5 = 15438460925394553346ULL;
signed char var_7 = (signed char)40;
unsigned short var_13 = (unsigned short)33106;
int zero = 0;
unsigned short var_15 = (unsigned short)22287;
unsigned short var_16 = (unsigned short)35042;
unsigned long long int var_17 = 5448829663530742607ULL;
short var_18 = (short)-12395;
long long int arr_0 [13] ;
_Bool arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -6954358292534167665LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
