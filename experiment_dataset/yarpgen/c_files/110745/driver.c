#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13623;
unsigned long long int var_3 = 15008324425798601639ULL;
long long int var_12 = 1197300403434846850LL;
int zero = 0;
long long int var_17 = 5323952013494639280LL;
unsigned long long int var_18 = 193855225031423747ULL;
void init() {
}

void checksum() {
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
