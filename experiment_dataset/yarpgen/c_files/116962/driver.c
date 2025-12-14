#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 676559162U;
long long int var_4 = -2636926051794740267LL;
int var_7 = 1380638094;
unsigned long long int var_9 = 5914222938335079746ULL;
long long int var_11 = -4359105435948775427LL;
unsigned char var_12 = (unsigned char)208;
long long int var_13 = 8804573299751818426LL;
int var_14 = -553299968;
int zero = 0;
unsigned long long int var_16 = 3329267286944790788ULL;
long long int var_17 = 6292035881421074957LL;
unsigned int var_18 = 3984009642U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
