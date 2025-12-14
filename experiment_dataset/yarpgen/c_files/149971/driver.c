#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14718048213504196418ULL;
unsigned int var_6 = 3592577269U;
unsigned long long int var_9 = 6113766199412368148ULL;
unsigned long long int var_10 = 1822852491409995380ULL;
int zero = 0;
unsigned long long int var_14 = 5944982208984301273ULL;
unsigned int var_15 = 434010194U;
unsigned long long int var_16 = 6558224142720582986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
