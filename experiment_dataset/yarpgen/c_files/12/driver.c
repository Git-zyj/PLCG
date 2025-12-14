#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1444572122;
unsigned long long int var_16 = 4149976456755991480ULL;
unsigned long long int var_17 = 1833521614687400763ULL;
int zero = 0;
int var_18 = -1555658384;
unsigned short var_19 = (unsigned short)44255;
unsigned long long int var_20 = 8433280507876859773ULL;
unsigned char var_21 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
