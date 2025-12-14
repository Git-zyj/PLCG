#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1844363140;
long long int var_4 = 8353699773542845659LL;
unsigned short var_7 = (unsigned short)64962;
unsigned short var_9 = (unsigned short)22413;
int zero = 0;
long long int var_12 = -1141271032388238805LL;
int var_13 = 650842548;
int var_14 = -1062543529;
unsigned long long int var_15 = 2947160061521660894ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
