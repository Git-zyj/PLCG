#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned long long int var_2 = 16366480753021017377ULL;
unsigned int var_3 = 1863704586U;
unsigned int var_4 = 3288355899U;
short var_6 = (short)30536;
_Bool var_7 = (_Bool)0;
int var_8 = -1462185308;
short var_16 = (short)16199;
unsigned short var_17 = (unsigned short)41549;
int zero = 0;
long long int var_18 = -3418032664111842693LL;
unsigned long long int var_19 = 12746977345838349864ULL;
unsigned int var_20 = 2627774361U;
signed char arr_5 [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)81 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)25;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
