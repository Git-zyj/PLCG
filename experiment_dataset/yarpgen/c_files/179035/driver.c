#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23247;
signed char var_9 = (signed char)123;
int var_10 = 1254843865;
unsigned long long int var_14 = 17655573550841171677ULL;
int zero = 0;
signed char var_16 = (signed char)13;
unsigned int var_17 = 3490859976U;
void init() {
}

void checksum() {
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
