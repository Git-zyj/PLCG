#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
long long int var_4 = -7242365213134997191LL;
unsigned char var_5 = (unsigned char)106;
unsigned short var_6 = (unsigned short)63911;
unsigned long long int var_7 = 12104496746377385737ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 11473477467660855645ULL;
int var_14 = 1059041264;
short var_15 = (short)14798;
unsigned long long int var_16 = 14037335853091852102ULL;
unsigned long long int var_17 = 5468864575166221080ULL;
unsigned int var_18 = 1083218233U;
unsigned short var_19 = (unsigned short)7623;
signed char var_20 = (signed char)-9;
unsigned long long int arr_0 [18] [18] ;
long long int arr_2 [18] [18] ;
signed char arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 263976614529752758ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1876159424291520794LL : -3767615928274510977LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)56 : (signed char)-113;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
