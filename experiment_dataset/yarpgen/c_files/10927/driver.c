#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)27470;
short var_12 = (short)19252;
short var_13 = (short)27728;
short var_15 = (short)-30884;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-71;
signed char var_18 = (signed char)46;
long long int arr_0 [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -7768254286895883286LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)61603;
}

void checksum() {
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
