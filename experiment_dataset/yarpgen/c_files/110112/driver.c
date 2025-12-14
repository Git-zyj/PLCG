#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
unsigned long long int var_7 = 253741358671124606ULL;
signed char var_10 = (signed char)41;
int zero = 0;
signed char var_15 = (signed char)-11;
signed char var_16 = (signed char)83;
unsigned long long int var_17 = 13954989612891667960ULL;
unsigned long long int var_18 = 9565363427985054505ULL;
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
