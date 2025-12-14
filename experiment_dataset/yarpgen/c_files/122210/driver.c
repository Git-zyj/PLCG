#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1340018390;
int var_1 = -637213817;
int var_2 = 119037778;
unsigned short var_9 = (unsigned short)40877;
int zero = 0;
int var_19 = -1151302432;
short var_20 = (short)3815;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
