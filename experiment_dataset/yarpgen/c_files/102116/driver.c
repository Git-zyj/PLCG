#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -593600229784143433LL;
long long int var_7 = 692928568511037682LL;
signed char var_9 = (signed char)-96;
int zero = 0;
short var_12 = (short)-8636;
signed char var_13 = (signed char)79;
unsigned char var_14 = (unsigned char)140;
unsigned long long int var_15 = 17764120485253165442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
