#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2420062815U;
int var_8 = -1939426821;
unsigned long long int var_9 = 12241087692651214330ULL;
unsigned int var_12 = 1199127305U;
int zero = 0;
signed char var_14 = (signed char)123;
unsigned int var_15 = 1071103395U;
int var_16 = -658571242;
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
