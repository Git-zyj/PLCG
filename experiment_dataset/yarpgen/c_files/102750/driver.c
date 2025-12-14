#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2778987688U;
unsigned short var_7 = (unsigned short)32456;
unsigned int var_9 = 2176219266U;
unsigned int var_11 = 408105477U;
int zero = 0;
int var_13 = 512618661;
unsigned short var_14 = (unsigned short)39074;
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
