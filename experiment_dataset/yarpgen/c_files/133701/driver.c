#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5332;
int var_3 = -1052964256;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5139027784866046261ULL;
long long int var_13 = -1167175001631863095LL;
unsigned int var_19 = 2348542256U;
int zero = 0;
signed char var_20 = (signed char)52;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)87;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)117;
signed char var_25 = (signed char)45;
_Bool var_26 = (_Bool)1;
long long int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1163343924399876420LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
