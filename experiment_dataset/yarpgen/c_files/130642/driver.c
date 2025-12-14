#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2837201063U;
unsigned long long int var_3 = 6503169407699635576ULL;
signed char var_7 = (signed char)-62;
int var_12 = 8852245;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1147364676U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-7;
unsigned int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 4044957876U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
