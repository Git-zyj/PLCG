#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14168883655743006821ULL;
int var_8 = -1913580799;
signed char var_9 = (signed char)-12;
signed char var_10 = (signed char)-100;
int zero = 0;
long long int var_12 = 3616010818294470423LL;
int var_13 = -1557246684;
int var_14 = -1210284445;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
