#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2701471630442729865LL;
unsigned short var_9 = (unsigned short)18478;
short var_11 = (short)-4788;
int zero = 0;
unsigned short var_12 = (unsigned short)28260;
unsigned short var_13 = (unsigned short)21476;
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
