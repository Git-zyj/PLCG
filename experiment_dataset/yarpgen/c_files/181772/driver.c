#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3359;
unsigned long long int var_6 = 5916450063660265437ULL;
signed char var_11 = (signed char)-44;
unsigned long long int var_12 = 16543262522968621050ULL;
int zero = 0;
int var_17 = -313886878;
int var_18 = 1077852918;
void init() {
}

void checksum() {
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
