#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3962157837U;
signed char var_2 = (signed char)-14;
unsigned long long int var_8 = 7851645593875127349ULL;
int zero = 0;
signed char var_20 = (signed char)41;
unsigned long long int var_21 = 2769423042631814727ULL;
void init() {
}

void checksum() {
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
