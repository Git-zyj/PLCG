#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26562;
int var_2 = 53257771;
int var_5 = -1865289646;
unsigned long long int var_8 = 9786048479531543923ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)25466;
unsigned short var_13 = (unsigned short)10635;
long long int var_14 = -3174302793630246750LL;
unsigned short var_15 = (unsigned short)45380;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
