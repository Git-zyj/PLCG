#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3806432454U;
long long int var_5 = -4081837706531850058LL;
unsigned char var_6 = (unsigned char)205;
signed char var_7 = (signed char)-111;
unsigned char var_8 = (unsigned char)211;
signed char var_9 = (signed char)-36;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-76;
int zero = 0;
signed char var_17 = (signed char)94;
int var_18 = -3609341;
unsigned int var_19 = 1268581187U;
signed char var_20 = (signed char)86;
unsigned char var_21 = (unsigned char)236;
unsigned short var_22 = (unsigned short)37211;
signed char arr_1 [25] ;
long long int arr_2 [25] [25] [25] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2172236911763193327LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -7801787069594022460LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
