#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
int var_3 = -1487047667;
signed char var_9 = (signed char)-104;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 10383822067477469005ULL;
short var_13 = (short)10221;
long long int var_16 = 4972121636202035457LL;
int zero = 0;
short var_18 = (short)30587;
signed char var_19 = (signed char)-29;
unsigned int var_20 = 1889534561U;
int var_21 = -81049935;
int var_22 = 1819098412;
unsigned int var_23 = 1182490400U;
long long int arr_0 [15] ;
short arr_1 [15] ;
unsigned int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -8915446195993978881LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)25237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 4033221827U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
