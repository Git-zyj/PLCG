#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -223642543;
short var_7 = (short)130;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-34;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -2218591909744260773LL;
signed char var_12 = (signed char)-110;
unsigned int var_13 = 1772771922U;
signed char var_14 = (signed char)7;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1689113240U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
