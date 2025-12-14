#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2771022821U;
short var_2 = (short)18361;
int var_4 = -1183140368;
signed char var_8 = (signed char)-58;
int zero = 0;
long long int var_11 = 7305282342023526051LL;
long long int var_12 = 2756956921147974920LL;
short var_13 = (short)21658;
unsigned int var_14 = 3292060021U;
unsigned char var_15 = (unsigned char)50;
int var_16 = 377857759;
unsigned int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3261076414U;
}

void checksum() {
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
