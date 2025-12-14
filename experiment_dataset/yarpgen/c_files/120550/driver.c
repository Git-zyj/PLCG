#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2832547271U;
int var_6 = 853845121;
short var_7 = (short)22088;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1407139399U;
unsigned short var_13 = (unsigned short)46372;
unsigned short var_15 = (unsigned short)9078;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
unsigned int var_19 = 1812826346U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)36;
unsigned int var_22 = 2138065643U;
_Bool arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
