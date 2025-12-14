#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1432469562U;
unsigned int var_4 = 3099130946U;
unsigned int var_9 = 3472803569U;
unsigned int var_10 = 1006945271U;
unsigned int var_12 = 3089107007U;
unsigned int var_15 = 205210522U;
int zero = 0;
unsigned int var_17 = 2404272068U;
unsigned int var_18 = 2650534906U;
unsigned int var_19 = 1906549840U;
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
