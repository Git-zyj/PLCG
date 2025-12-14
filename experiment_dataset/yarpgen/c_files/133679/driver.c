#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15798;
unsigned short var_2 = (unsigned short)59611;
unsigned short var_3 = (unsigned short)62617;
signed char var_11 = (signed char)103;
int var_13 = 144919764;
int var_14 = 1915875924;
int zero = 0;
unsigned long long int var_15 = 9760873502410602366ULL;
unsigned int var_16 = 1612836575U;
unsigned long long int var_17 = 3998087313165651814ULL;
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
