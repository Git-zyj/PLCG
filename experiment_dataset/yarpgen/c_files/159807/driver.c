#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)49160;
int var_2 = -2138277946;
long long int var_6 = 6370077741999188684LL;
long long int var_7 = 1763963697362073223LL;
long long int var_11 = -2096397433317806446LL;
int zero = 0;
signed char var_12 = (signed char)-34;
unsigned long long int var_13 = 1311983262116045781ULL;
void init() {
}

void checksum() {
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
