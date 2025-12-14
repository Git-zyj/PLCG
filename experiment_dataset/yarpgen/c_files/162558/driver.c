#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 314618024U;
unsigned short var_4 = (unsigned short)21782;
long long int var_5 = 2204135091565488316LL;
unsigned short var_6 = (unsigned short)61375;
long long int var_8 = -3167455213577301411LL;
long long int var_11 = -8971095105286007867LL;
unsigned short var_12 = (unsigned short)6358;
int zero = 0;
long long int var_14 = 3941824755488368202LL;
unsigned short var_15 = (unsigned short)45353;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
