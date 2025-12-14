#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1578062982;
unsigned long long int var_4 = 7162389232244953333ULL;
unsigned int var_10 = 3931464958U;
unsigned long long int var_14 = 15434347827236507613ULL;
int zero = 0;
unsigned int var_17 = 3246664472U;
unsigned long long int var_18 = 12322460618625128578ULL;
unsigned int var_19 = 1651740265U;
void init() {
}

void checksum() {
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
