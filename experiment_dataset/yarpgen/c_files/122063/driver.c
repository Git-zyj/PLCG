#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7769209925159308983LL;
unsigned int var_1 = 442911244U;
unsigned char var_3 = (unsigned char)150;
int zero = 0;
unsigned short var_17 = (unsigned short)35375;
int var_18 = 1721464582;
int var_19 = -636724841;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
