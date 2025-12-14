#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4237098366450935939LL;
_Bool var_2 = (_Bool)1;
unsigned int var_11 = 159189389U;
int zero = 0;
signed char var_13 = (signed char)35;
int var_14 = 1129447258;
unsigned long long int var_15 = 10931490848430762823ULL;
unsigned short var_16 = (unsigned short)57039;
void init() {
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
