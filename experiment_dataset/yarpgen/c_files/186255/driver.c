#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 421446904;
unsigned long long int var_7 = 12174206633933424556ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)33348;
long long int var_13 = -139779069016201258LL;
unsigned int var_14 = 867483046U;
unsigned short var_15 = (unsigned short)11237;
_Bool arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
