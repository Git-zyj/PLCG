#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15847557717240794244ULL;
unsigned long long int var_2 = 17760362804543249786ULL;
unsigned long long int var_7 = 17465441150778402262ULL;
int zero = 0;
int var_13 = 1965797830;
short var_14 = (short)-16776;
unsigned long long int var_15 = 1940546063682578915ULL;
_Bool var_16 = (_Bool)0;
_Bool arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
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
