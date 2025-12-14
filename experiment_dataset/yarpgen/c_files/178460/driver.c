#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 65377306U;
unsigned int var_8 = 1430946681U;
unsigned int var_9 = 3439577168U;
int zero = 0;
int var_18 = -1755845866;
int var_19 = 1863958906;
unsigned int var_20 = 942161310U;
int var_21 = 1359959504;
int var_22 = 2107990085;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
