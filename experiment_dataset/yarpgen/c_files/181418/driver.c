#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16912097053819612821ULL;
unsigned long long int var_14 = 17428119518439910736ULL;
int zero = 0;
unsigned long long int var_19 = 128216980307546171ULL;
unsigned long long int var_20 = 3319623186287492978ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
