#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -209174959;
unsigned char var_10 = (unsigned char)212;
short var_12 = (short)-20571;
unsigned long long int var_15 = 16718285625748021476ULL;
int zero = 0;
unsigned long long int var_19 = 15486905354175137130ULL;
_Bool var_20 = (_Bool)0;
int var_21 = 347221811;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_1 [22] [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 12095140594572996054ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
