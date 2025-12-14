#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
unsigned int var_5 = 791637314U;
unsigned char var_9 = (unsigned char)233;
int zero = 0;
unsigned short var_16 = (unsigned short)36222;
long long int var_17 = 1856675497099918592LL;
int var_18 = 1905445266;
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
