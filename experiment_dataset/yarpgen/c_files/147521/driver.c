#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13405072700748628142ULL;
_Bool var_7 = (_Bool)0;
long long int var_13 = -4295951679388217602LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)107;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-58;
signed char var_24 = (signed char)119;
short var_25 = (short)-10750;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)20512;
_Bool arr_0 [10] ;
unsigned long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1556681225108830643ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
