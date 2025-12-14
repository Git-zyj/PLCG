#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1321870124U;
unsigned char var_1 = (unsigned char)246;
unsigned long long int var_4 = 8191342974947498979ULL;
int var_9 = 1729316849;
int zero = 0;
unsigned long long int var_12 = 11628648057487175789ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
