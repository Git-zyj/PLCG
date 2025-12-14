#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29482;
unsigned short var_4 = (unsigned short)36489;
unsigned short var_8 = (unsigned short)41771;
int zero = 0;
unsigned long long int var_10 = 14305732885742784166ULL;
int var_11 = -2086419960;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
