#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3551;
unsigned long long int var_3 = 9635235109789113523ULL;
long long int var_4 = 7940754853491672970LL;
unsigned short var_8 = (unsigned short)37031;
unsigned int var_11 = 3663813049U;
signed char var_12 = (signed char)-98;
int zero = 0;
signed char var_13 = (signed char)10;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2589670651351986397LL;
signed char var_16 = (signed char)-29;
unsigned short arr_0 [11] ;
unsigned long long int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)32664;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5189129175007135270ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
