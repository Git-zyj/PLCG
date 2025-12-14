#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4161771434U;
unsigned int var_3 = 3258376719U;
unsigned short var_9 = (unsigned short)23392;
unsigned short var_10 = (unsigned short)11493;
unsigned long long int var_12 = 8447140540507876262ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)2898;
signed char var_14 = (signed char)71;
void init() {
}

void checksum() {
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
