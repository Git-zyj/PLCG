#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4922767445632280245LL;
unsigned char var_10 = (unsigned char)177;
unsigned long long int var_11 = 13711467787669690139ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)154;
long long int var_16 = 5758570358660166995LL;
unsigned long long int var_17 = 994730736691043940ULL;
unsigned long long int var_18 = 3784293699687210863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
