#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1531806666;
int var_7 = 1859351460;
int var_9 = -382266446;
int var_10 = -1670337192;
int var_11 = 699756644;
int var_17 = -1667143326;
int zero = 0;
int var_20 = -1683695334;
int var_21 = -948168842;
int var_22 = -2105632290;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
