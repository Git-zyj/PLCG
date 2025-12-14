#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2145213883;
unsigned long long int var_11 = 2706758777752255247ULL;
unsigned char var_14 = (unsigned char)181;
long long int var_17 = 8944324670965030836LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-61;
short var_20 = (short)-24271;
int var_21 = 454609754;
short arr_1 [21] ;
unsigned long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-18236;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 17530718704406228824ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
