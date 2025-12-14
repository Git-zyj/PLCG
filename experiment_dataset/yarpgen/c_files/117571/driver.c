#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6875990447203710073ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-2099;
int zero = 0;
long long int var_17 = -1928741260834264673LL;
signed char var_18 = (signed char)-63;
void init() {
}

void checksum() {
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
