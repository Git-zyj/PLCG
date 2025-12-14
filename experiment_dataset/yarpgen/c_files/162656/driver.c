#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6686954485144648333LL;
short var_5 = (short)29184;
int var_6 = 303953900;
short var_9 = (short)6290;
int var_10 = -967516476;
int var_11 = -1010388363;
short var_12 = (short)13973;
int zero = 0;
short var_14 = (short)-12046;
short var_15 = (short)-25585;
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
