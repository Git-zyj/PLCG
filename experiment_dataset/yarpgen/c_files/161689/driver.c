#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1321918956;
unsigned short var_3 = (unsigned short)13772;
int var_6 = 1112203593;
long long int var_9 = -4804693425101243539LL;
int zero = 0;
unsigned char var_12 = (unsigned char)58;
int var_13 = -850950028;
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
