#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1229289720;
unsigned int var_3 = 1468276351U;
int var_8 = 1855383349;
signed char var_10 = (signed char)87;
short var_13 = (short)21653;
signed char var_15 = (signed char)29;
int zero = 0;
unsigned short var_17 = (unsigned short)54079;
long long int var_18 = -272409758407432370LL;
unsigned long long int var_19 = 10685843556827805296ULL;
signed char var_20 = (signed char)51;
void init() {
}

void checksum() {
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
