#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1822356814;
int var_2 = -551129455;
int var_4 = 261682854;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 10654277120165837348ULL;
int zero = 0;
short var_12 = (short)-23776;
signed char var_13 = (signed char)108;
unsigned int var_14 = 338381457U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
