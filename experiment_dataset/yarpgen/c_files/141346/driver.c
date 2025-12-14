#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13901709263225753486ULL;
unsigned int var_5 = 276318791U;
unsigned int var_9 = 3403192182U;
int zero = 0;
short var_16 = (short)-25814;
unsigned long long int var_17 = 4304655495731017594ULL;
unsigned int var_18 = 2116229815U;
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
