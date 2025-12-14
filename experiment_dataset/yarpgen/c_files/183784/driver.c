#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 514467813U;
int var_4 = -903220801;
signed char var_6 = (signed char)-30;
unsigned long long int var_11 = 1707152590609435979ULL;
unsigned long long int var_13 = 3158842939658279901ULL;
unsigned long long int var_14 = 3789067989500696708ULL;
int zero = 0;
unsigned long long int var_16 = 14407029240361263891ULL;
unsigned short var_17 = (unsigned short)11730;
unsigned int var_18 = 762932810U;
unsigned short var_19 = (unsigned short)61762;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
