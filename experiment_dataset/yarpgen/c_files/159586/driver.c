#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
int var_3 = -1314629757;
unsigned short var_4 = (unsigned short)30755;
signed char var_5 = (signed char)-18;
long long int var_6 = -8762819266839726451LL;
long long int var_7 = -3902987089456961929LL;
unsigned long long int var_11 = 3327481153079687548ULL;
short var_12 = (short)2144;
int zero = 0;
short var_13 = (short)3844;
signed char var_14 = (signed char)-21;
signed char var_15 = (signed char)-39;
unsigned long long int var_16 = 10866269443047522155ULL;
signed char var_17 = (signed char)-42;
long long int var_18 = 4853790402454419018LL;
int arr_1 [20] [20] ;
signed char arr_4 [20] [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 137976876;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)29105;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
