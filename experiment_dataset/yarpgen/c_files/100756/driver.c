#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29269;
unsigned short var_3 = (unsigned short)44581;
unsigned short var_9 = (unsigned short)36697;
short var_11 = (short)16093;
int zero = 0;
unsigned int var_12 = 3202562609U;
int var_13 = 1636343400;
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
