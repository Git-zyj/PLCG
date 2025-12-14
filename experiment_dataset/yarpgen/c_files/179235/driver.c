#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3374699664U;
int var_4 = -1661497158;
unsigned int var_5 = 2117037056U;
int var_8 = 440413919;
unsigned int var_9 = 4053813653U;
unsigned long long int var_10 = 7522066679077008932ULL;
int zero = 0;
unsigned int var_11 = 397197882U;
unsigned int var_12 = 4251906710U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
