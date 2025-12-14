#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58222;
unsigned int var_2 = 2640437548U;
short var_4 = (short)-20497;
short var_6 = (short)-31611;
int var_9 = -386171106;
unsigned char var_10 = (unsigned char)196;
int zero = 0;
int var_11 = -905919983;
int var_12 = 33102295;
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
