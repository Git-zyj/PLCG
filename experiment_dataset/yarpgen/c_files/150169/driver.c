#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1078581239U;
unsigned char var_7 = (unsigned char)161;
unsigned long long int var_9 = 11940122072533641328ULL;
int zero = 0;
unsigned long long int var_12 = 9030384500111546152ULL;
int var_13 = 645575663;
int var_14 = 515402672;
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
