#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5507762144619064738ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-31759;
short var_9 = (short)-11300;
unsigned int var_12 = 402194581U;
unsigned char var_13 = (unsigned char)159;
unsigned long long int var_14 = 4033600749499251983ULL;
int var_16 = -678572977;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)61;
short var_20 = (short)11453;
unsigned int var_21 = 1072881926U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2755186331U;
unsigned char var_24 = (unsigned char)48;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7581171778442966577ULL : 11275591628938888623ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
