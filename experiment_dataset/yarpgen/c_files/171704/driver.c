#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 960241703U;
int var_1 = -835345790;
unsigned int var_9 = 2805560939U;
int zero = 0;
unsigned int var_18 = 1092908292U;
int var_19 = -1175435739;
unsigned char var_20 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
