#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 460166942U;
unsigned int var_5 = 595489285U;
unsigned int var_6 = 1167246967U;
unsigned int var_7 = 3878782689U;
unsigned int var_9 = 578402138U;
int zero = 0;
unsigned int var_10 = 475689016U;
unsigned int var_11 = 2592441142U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
