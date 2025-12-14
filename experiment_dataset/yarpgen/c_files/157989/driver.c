#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33409;
unsigned int var_3 = 3476795853U;
int var_9 = 934608196;
int zero = 0;
unsigned char var_17 = (unsigned char)152;
unsigned char var_18 = (unsigned char)20;
unsigned int var_19 = 497510692U;
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
