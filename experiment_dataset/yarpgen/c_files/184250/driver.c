#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3705884412U;
unsigned long long int var_6 = 11611394108903190812ULL;
unsigned int var_9 = 2819787272U;
int var_14 = -754651765;
unsigned int var_17 = 1832128304U;
int zero = 0;
unsigned long long int var_18 = 6683977266067339442ULL;
int var_19 = 1376559507;
void init() {
}

void checksum() {
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
