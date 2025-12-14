#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8814077699233025798ULL;
int var_4 = 2074320103;
short var_5 = (short)13620;
int zero = 0;
short var_10 = (short)-23829;
unsigned long long int var_11 = 8883513091614850124ULL;
short var_12 = (short)18244;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
