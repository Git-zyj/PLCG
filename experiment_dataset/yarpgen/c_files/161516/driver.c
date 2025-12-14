#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)13644;
short var_9 = (short)-26730;
unsigned long long int var_10 = 6421112981486580898ULL;
unsigned short var_11 = (unsigned short)15922;
int zero = 0;
unsigned long long int var_13 = 7877535517913059780ULL;
unsigned long long int var_14 = 13209084247683255854ULL;
signed char var_15 = (signed char)-2;
short var_16 = (short)-13051;
unsigned long long int var_17 = 18298237203613271835ULL;
short var_18 = (short)-22493;
unsigned long long int var_19 = 4775244125731373372ULL;
unsigned short arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)7766 : (unsigned short)36217;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
