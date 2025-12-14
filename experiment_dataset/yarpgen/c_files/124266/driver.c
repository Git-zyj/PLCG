#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2109315424;
long long int var_6 = -2575916902999641413LL;
unsigned short var_7 = (unsigned short)34274;
long long int var_9 = 4457177952736472931LL;
int zero = 0;
unsigned short var_12 = (unsigned short)34318;
signed char var_13 = (signed char)-30;
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
