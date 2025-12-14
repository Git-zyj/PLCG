#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -946657881;
int var_1 = -266823838;
int var_2 = -1919142266;
int var_4 = 1018293387;
int var_7 = -187337384;
int var_9 = 817900706;
int var_12 = 300869893;
int zero = 0;
int var_14 = -1022400332;
int var_15 = -1176337450;
int var_16 = -1023978017;
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
