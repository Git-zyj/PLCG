#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1785399496768049570LL;
int var_8 = -1343303330;
unsigned int var_12 = 1709481301U;
int zero = 0;
unsigned int var_13 = 3941819926U;
unsigned int var_14 = 2567882129U;
unsigned char var_15 = (unsigned char)57;
void init() {
}

void checksum() {
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
