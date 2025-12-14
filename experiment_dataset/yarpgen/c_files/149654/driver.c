#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 643112223;
short var_3 = (short)-29487;
int var_4 = 2029742371;
long long int var_6 = 1035025327341651472LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)-9813;
short var_11 = (short)20999;
signed char var_12 = (signed char)-36;
int var_13 = -1322836263;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-18970;
int var_16 = -2095028983;
int arr_0 [10] ;
int arr_1 [10] ;
short arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -390306407 : -175366339;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1167369294;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)24958;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
