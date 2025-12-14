#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1413843803513454392ULL;
long long int var_2 = -8084354905997185175LL;
signed char var_4 = (signed char)-100;
short var_5 = (short)-27003;
int var_7 = -1398397211;
long long int var_8 = -7863597775535567981LL;
int zero = 0;
signed char var_10 = (signed char)-121;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
