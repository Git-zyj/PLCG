#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7906010839641823865LL;
long long int var_3 = -270949964164736333LL;
unsigned long long int var_4 = 2652636176141165939ULL;
unsigned short var_10 = (unsigned short)47390;
int zero = 0;
long long int var_14 = -3772593630993653895LL;
long long int var_15 = -5289740149574548791LL;
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
