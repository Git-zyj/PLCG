#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12809476534905456487ULL;
unsigned char var_1 = (unsigned char)84;
unsigned int var_4 = 3289909818U;
unsigned long long int var_5 = 17313907856040082356ULL;
short var_11 = (short)13105;
unsigned int var_17 = 3603616304U;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-9894;
void init() {
}

void checksum() {
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
