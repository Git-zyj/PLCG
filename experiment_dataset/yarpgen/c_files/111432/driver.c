#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
int var_5 = 1052484871;
int var_8 = 499117283;
unsigned int var_10 = 2628553249U;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-20050;
signed char var_14 = (signed char)8;
int var_17 = -2055403385;
short var_18 = (short)-12722;
int zero = 0;
unsigned int var_20 = 3255241636U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8162310230685337213ULL;
int var_23 = 156169587;
short var_24 = (short)-19085;
int var_25 = 1472844170;
short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)23792;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
