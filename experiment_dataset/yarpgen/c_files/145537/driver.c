#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2801577303201916780LL;
unsigned int var_1 = 2166075559U;
unsigned int var_2 = 951788749U;
int var_3 = 1240424619;
unsigned int var_4 = 4224047323U;
int var_6 = 2068239880;
long long int var_7 = -8831708027103051327LL;
unsigned char var_10 = (unsigned char)193;
unsigned char var_12 = (unsigned char)74;
signed char var_13 = (signed char)-113;
signed char var_15 = (signed char)-25;
unsigned int var_16 = 2934533853U;
unsigned int var_17 = 912407861U;
int zero = 0;
unsigned int var_19 = 3536549320U;
unsigned int var_20 = 20255930U;
unsigned int var_21 = 2291590338U;
unsigned int var_22 = 2178883357U;
unsigned char var_23 = (unsigned char)122;
signed char arr_0 [24] ;
unsigned int arr_2 [24] [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1085131953U : 871354295U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -3745782384232656804LL : 8848061052266393380LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
