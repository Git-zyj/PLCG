#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)84;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14402227516581058187ULL;
unsigned int var_7 = 2527205423U;
unsigned long long int var_11 = 5201248716071037860ULL;
unsigned int var_12 = 4261973448U;
unsigned int var_14 = 4088220509U;
int zero = 0;
signed char var_16 = (signed char)42;
short var_17 = (short)5855;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
