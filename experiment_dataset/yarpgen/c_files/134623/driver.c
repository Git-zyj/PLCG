#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2632774872U;
unsigned int var_5 = 3932884262U;
unsigned int var_6 = 1084260614U;
unsigned int var_9 = 2423312280U;
unsigned int var_11 = 3642013695U;
unsigned int var_16 = 3868628434U;
int zero = 0;
unsigned int var_19 = 3225149861U;
unsigned int var_20 = 346408650U;
unsigned int var_21 = 3911953957U;
unsigned int var_22 = 1294683611U;
void init() {
}

void checksum() {
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
