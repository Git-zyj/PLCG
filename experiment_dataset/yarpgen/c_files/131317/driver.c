#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7147907682021984603ULL;
short var_2 = (short)12610;
short var_3 = (short)6590;
unsigned long long int var_6 = 9101648132625265033ULL;
short var_10 = (short)27990;
short var_11 = (short)-27803;
unsigned long long int var_12 = 9949595780096216077ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-94;
unsigned long long int var_16 = 5525079447683789982ULL;
signed char var_17 = (signed char)57;
_Bool var_18 = (_Bool)1;
signed char arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
