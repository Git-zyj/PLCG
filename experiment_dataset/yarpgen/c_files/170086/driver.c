#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3305;
long long int var_1 = 4301983624601145306LL;
signed char var_3 = (signed char)71;
signed char var_4 = (signed char)36;
unsigned char var_5 = (unsigned char)57;
short var_7 = (short)-13808;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1147286388;
_Bool var_12 = (_Bool)1;
unsigned long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 7142801175123037403ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
