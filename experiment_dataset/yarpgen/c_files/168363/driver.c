#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3970207509U;
unsigned int var_2 = 1194695651U;
unsigned int var_6 = 3808009347U;
unsigned int var_7 = 494423720U;
unsigned int var_8 = 2990983466U;
unsigned int var_9 = 2096732661U;
unsigned int var_13 = 2048278217U;
int zero = 0;
unsigned int var_15 = 3618068351U;
unsigned int var_16 = 28210993U;
unsigned int var_17 = 3561976512U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
