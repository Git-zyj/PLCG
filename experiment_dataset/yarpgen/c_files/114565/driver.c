#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_7 = (signed char)-8;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-9438;
short var_13 = (short)-26432;
int zero = 0;
unsigned long long int var_18 = 243691958810846791ULL;
signed char var_19 = (signed char)-40;
unsigned long long int var_20 = 3126292546643594178ULL;
short var_21 = (short)31893;
short var_22 = (short)-18545;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned short arr_0 [25] [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)4112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2139941992581448883ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
