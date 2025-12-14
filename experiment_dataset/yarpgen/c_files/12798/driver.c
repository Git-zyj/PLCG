#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2452275045844867199ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 6757499554599642006ULL;
signed char var_3 = (signed char)-24;
unsigned long long int var_14 = 10189734242064305560ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)58687;
int var_18 = 1388374865;
int var_19 = 573692738;
unsigned short var_20 = (unsigned short)63651;
signed char arr_0 [20] [20] ;
unsigned short arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)57945;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
