#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62392;
unsigned int var_1 = 3300642425U;
int zero = 0;
unsigned long long int var_10 = 10484647419318468420ULL;
long long int var_11 = 1112023406451607179LL;
unsigned short var_12 = (unsigned short)14187;
unsigned long long int var_13 = 17620990760759484465ULL;
unsigned long long int var_14 = 16514725937772413621ULL;
signed char var_15 = (signed char)-73;
unsigned int var_16 = 2380988652U;
unsigned int var_17 = 1005620492U;
unsigned int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 930190962U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
