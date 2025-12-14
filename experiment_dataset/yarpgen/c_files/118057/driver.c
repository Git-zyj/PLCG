#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
long long int var_2 = -5445204613067853944LL;
int var_5 = -1374100222;
int var_7 = -1585716856;
long long int var_9 = -2020479574811804516LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-116;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
