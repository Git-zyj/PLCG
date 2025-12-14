#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6911981731022312309LL;
int var_2 = -459642571;
short var_9 = (short)-2613;
int zero = 0;
unsigned short var_10 = (unsigned short)27875;
unsigned short var_11 = (unsigned short)36043;
unsigned long long int var_12 = 18297106129362112178ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
