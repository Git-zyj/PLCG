#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 359397246096553575ULL;
short var_12 = (short)-25541;
int zero = 0;
unsigned int var_16 = 2407663459U;
unsigned char var_17 = (unsigned char)51;
long long int var_18 = 7354553903609260040LL;
int var_19 = 1261161792;
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
