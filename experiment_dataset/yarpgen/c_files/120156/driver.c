#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3848;
unsigned long long int var_1 = 17993595856723215131ULL;
int var_5 = 789633834;
unsigned int var_6 = 2679267314U;
signed char var_8 = (signed char)3;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-65;
short var_13 = (short)-27957;
long long int var_14 = 2214176225391980400LL;
signed char var_15 = (signed char)74;
long long int var_16 = -5319710528279224770LL;
short var_17 = (short)29694;
unsigned long long int arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 15404296300534478381ULL : 3462583633347854508ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
