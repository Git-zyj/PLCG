#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1552949421U;
short var_7 = (short)-1284;
short var_13 = (short)-14453;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)32269;
short var_17 = (short)9702;
short var_18 = (short)25170;
unsigned int var_19 = 892679240U;
short var_20 = (short)-10218;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3482765639U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
