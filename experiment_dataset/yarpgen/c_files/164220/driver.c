#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3634257883U;
unsigned int var_3 = 397074266U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_16 = 1820955875480827060ULL;
int zero = 0;
unsigned int var_19 = 3813513998U;
unsigned int var_20 = 1268226574U;
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
