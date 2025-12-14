#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)159;
unsigned long long int var_14 = 1665208772352373503ULL;
int zero = 0;
int var_16 = 360080142;
unsigned long long int var_17 = 18006849536642920117ULL;
unsigned char var_18 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
