#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10009774679198770943ULL;
unsigned long long int var_2 = 16258896341361323768ULL;
signed char var_8 = (signed char)-123;
unsigned int var_9 = 2495692495U;
unsigned int var_14 = 1575966778U;
int zero = 0;
unsigned int var_19 = 2406915527U;
unsigned int var_20 = 889543301U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)42;
unsigned char var_23 = (unsigned char)232;
short var_24 = (short)3507;
unsigned long long int arr_1 [13] ;
signed char arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2778869403547578899ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-69;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
