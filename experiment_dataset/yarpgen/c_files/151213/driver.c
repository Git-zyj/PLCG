#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2024384199;
int var_6 = -598120741;
unsigned short var_7 = (unsigned short)39512;
unsigned long long int var_11 = 3126663791178363590ULL;
int var_12 = -581376455;
unsigned long long int var_13 = 15570635412957770745ULL;
int zero = 0;
int var_14 = 511766177;
int var_15 = -792087029;
unsigned long long int var_16 = 2509443142346097363ULL;
int var_17 = -327563396;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
