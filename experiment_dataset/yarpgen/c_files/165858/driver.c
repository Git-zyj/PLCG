#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7962630422259794111LL;
int var_6 = -1406611741;
long long int var_8 = 3621264769776201147LL;
int var_14 = 356977326;
int zero = 0;
unsigned int var_16 = 4206515405U;
int var_17 = 1753008850;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
