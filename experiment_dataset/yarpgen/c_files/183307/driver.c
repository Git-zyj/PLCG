#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7549534781169314627LL;
unsigned long long int var_4 = 11727672122636768944ULL;
unsigned char var_11 = (unsigned char)29;
int zero = 0;
unsigned short var_14 = (unsigned short)28705;
long long int var_15 = -819544386940554822LL;
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
