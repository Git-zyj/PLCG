#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 993916194;
unsigned long long int var_1 = 2538647170713975611ULL;
int var_3 = -131170971;
signed char var_4 = (signed char)-102;
int zero = 0;
int var_14 = 599781250;
int var_15 = 1909646777;
void init() {
}

void checksum() {
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
