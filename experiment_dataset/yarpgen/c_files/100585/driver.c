#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1676764376460311631LL;
unsigned short var_8 = (unsigned short)40295;
int zero = 0;
unsigned long long int var_11 = 10682935590693847645ULL;
unsigned long long int var_12 = 10199693849163878152ULL;
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
