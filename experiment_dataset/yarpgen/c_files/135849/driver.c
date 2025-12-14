#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)70;
unsigned long long int var_14 = 5870176765936400629ULL;
signed char var_16 = (signed char)-125;
int var_19 = -1731696473;
int zero = 0;
int var_20 = 393359263;
short var_21 = (short)-20575;
int var_22 = 921093995;
short var_23 = (short)-15911;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 11088289581928396047ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
