#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12252224292025775553ULL;
long long int var_7 = -2402368067094800640LL;
unsigned int var_9 = 4165767472U;
unsigned short var_10 = (unsigned short)47310;
short var_11 = (short)13194;
signed char var_13 = (signed char)-70;
unsigned long long int var_15 = 12105808586414096087ULL;
int var_16 = -1950702747;
int zero = 0;
long long int var_17 = 6066442458180502749LL;
unsigned int var_18 = 1043917076U;
unsigned int var_19 = 3962584513U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-14;
short var_22 = (short)9073;
long long int arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8938756071471545046LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
