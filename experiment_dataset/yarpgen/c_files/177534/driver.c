#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)9;
signed char var_2 = (signed char)118;
long long int var_3 = 7284293234497868615LL;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1892481284U;
int zero = 0;
unsigned int var_10 = 152745169U;
unsigned short var_11 = (unsigned short)50428;
int var_12 = 2023860215;
_Bool var_13 = (_Bool)0;
short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-28208;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
