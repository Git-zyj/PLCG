#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 9529721931264801053ULL;
unsigned long long int var_12 = 312360869232275261ULL;
int zero = 0;
short var_13 = (short)24400;
short var_14 = (short)-32260;
long long int var_15 = 1827157239842797580LL;
long long int var_16 = 497845503452291793LL;
unsigned long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 5089916903165721112ULL;
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
