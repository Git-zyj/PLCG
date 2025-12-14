#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11798542706096889041ULL;
unsigned long long int var_5 = 455684245717845598ULL;
unsigned int var_6 = 3725380037U;
unsigned int var_8 = 3859787538U;
unsigned long long int var_9 = 1747750770116376547ULL;
unsigned long long int var_10 = 15339952694797143123ULL;
unsigned int var_11 = 2101587563U;
unsigned short var_12 = (unsigned short)57881;
unsigned short var_13 = (unsigned short)52933;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
signed char var_16 = (signed char)86;
int var_17 = 1589885067;
unsigned char var_18 = (unsigned char)241;
unsigned int var_19 = 463620529U;
unsigned long long int var_20 = 14269232792489970170ULL;
unsigned long long int var_21 = 4745449871841647845ULL;
unsigned int var_22 = 2516903100U;
signed char var_23 = (signed char)53;
unsigned long long int var_24 = 18134340241222379728ULL;
unsigned int arr_3 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3680215056U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-74;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
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
