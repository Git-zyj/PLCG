#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)31;
unsigned char var_5 = (unsigned char)109;
unsigned int var_6 = 3403421320U;
short var_7 = (short)26924;
long long int var_8 = 1918480753091368242LL;
long long int var_12 = 3129458494492992646LL;
unsigned short var_13 = (unsigned short)57189;
long long int var_15 = 6768104370838828044LL;
int zero = 0;
unsigned char var_16 = (unsigned char)44;
int var_17 = 2079584148;
short var_18 = (short)-23907;
unsigned long long int var_19 = 393949409599160501ULL;
signed char var_20 = (signed char)87;
unsigned char var_21 = (unsigned char)214;
long long int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 4327145806921135009LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
