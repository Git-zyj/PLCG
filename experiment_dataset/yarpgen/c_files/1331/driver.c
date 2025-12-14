#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1498711898833067387LL;
signed char var_8 = (signed char)-13;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 4744727916347683563ULL;
short var_15 = (short)-18701;
unsigned int var_16 = 2400359383U;
void init() {
}

void checksum() {
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
