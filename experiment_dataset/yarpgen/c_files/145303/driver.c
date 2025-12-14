#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12000686966608503024ULL;
signed char var_10 = (signed char)-119;
unsigned short var_17 = (unsigned short)21224;
int zero = 0;
signed char var_19 = (signed char)-125;
unsigned long long int var_20 = 2062293897777411410ULL;
unsigned int var_21 = 4105860798U;
void init() {
}

void checksum() {
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
