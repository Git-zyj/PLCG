#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16289;
short var_5 = (short)-16927;
signed char var_13 = (signed char)-13;
unsigned char var_16 = (unsigned char)34;
int zero = 0;
signed char var_17 = (signed char)-56;
int var_18 = 521689;
unsigned long long int var_19 = 11994121781392687573ULL;
unsigned short var_20 = (unsigned short)23333;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 16332726010207576543ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
