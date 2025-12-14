#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)76;
unsigned char var_7 = (unsigned char)238;
unsigned char var_8 = (unsigned char)249;
unsigned long long int var_10 = 4342490008557554100ULL;
signed char var_12 = (signed char)-2;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)87;
signed char var_16 = (signed char)17;
unsigned long long int var_17 = 8804908281515632046ULL;
unsigned char var_18 = (unsigned char)187;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2345768641U;
signed char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-69;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
