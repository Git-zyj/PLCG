#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -276785327;
int var_9 = 1046396844;
unsigned long long int var_13 = 12992430354077702818ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)80;
int var_17 = 85274326;
unsigned long long int var_18 = 13064988503180630850ULL;
unsigned char var_19 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
