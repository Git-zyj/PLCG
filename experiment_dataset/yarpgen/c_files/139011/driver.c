#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1311766718;
_Bool var_4 = (_Bool)1;
long long int var_7 = -8967817448260300663LL;
int zero = 0;
unsigned long long int var_15 = 17536365647168685663ULL;
unsigned char var_16 = (unsigned char)18;
unsigned long long int var_17 = 7269448160175576004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
