#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11187039793163732366ULL;
unsigned long long int var_7 = 7782962499274237599ULL;
short var_10 = (short)24484;
int zero = 0;
unsigned char var_13 = (unsigned char)155;
short var_14 = (short)25404;
short var_15 = (short)-15073;
_Bool var_16 = (_Bool)0;
long long int var_17 = -684134775771871064LL;
long long int var_18 = 4528803750987647126LL;
short arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)27192;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
