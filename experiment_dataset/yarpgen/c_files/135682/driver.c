#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37729;
short var_1 = (short)-17802;
unsigned int var_2 = 584950013U;
signed char var_3 = (signed char)108;
int var_4 = -166493022;
short var_5 = (short)17344;
unsigned int var_6 = 4276880970U;
signed char var_7 = (signed char)76;
short var_8 = (short)12351;
unsigned long long int var_9 = 7808119041506586114ULL;
unsigned long long int var_10 = 13528190203729661408ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)61869;
unsigned long long int var_13 = 1597088089448950918ULL;
int zero = 0;
short var_14 = (short)-7423;
signed char var_15 = (signed char)89;
short var_16 = (short)24042;
short var_17 = (short)5009;
unsigned short var_18 = (unsigned short)15147;
unsigned long long int var_19 = 2161598587863453517ULL;
unsigned int arr_0 [17] ;
unsigned short arr_1 [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1431194316U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)64322;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 727027688U : 1565492092U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
