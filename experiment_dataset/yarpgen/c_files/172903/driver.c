#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13439;
unsigned int var_5 = 1901245390U;
unsigned int var_10 = 3082332496U;
unsigned long long int var_11 = 18407219781664289868ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -6323041735429517620LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-101;
void init() {
}

void checksum() {
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
