#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)213;
unsigned long long int var_6 = 14912699847916991029ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16256536806832284409ULL;
long long int var_13 = -1499499998810926667LL;
short var_14 = (short)11949;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1829822367821179156LL;
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
