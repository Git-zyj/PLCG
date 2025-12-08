#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8935;
short var_3 = (short)-22835;
short var_4 = (short)28421;
short var_9 = (short)-6608;
short var_11 = (short)-8277;
short var_18 = (short)10285;
int zero = 0;
short var_20 = (short)11053;
short var_21 = (short)-7986;
short var_22 = (short)27651;
short var_23 = (short)-147;
short var_24 = (short)-127;
short arr_1 [10] ;
short arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)32669;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-1377;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
