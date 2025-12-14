#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9339304398923642090ULL;
short var_3 = (short)14732;
unsigned long long int var_11 = 4285549908950968025ULL;
unsigned long long int var_13 = 5235755371706000989ULL;
int zero = 0;
unsigned int var_15 = 2737043434U;
int var_16 = -1882830216;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
