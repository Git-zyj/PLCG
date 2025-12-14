#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31444;
unsigned long long int var_1 = 18076615586007712952ULL;
unsigned short var_6 = (unsigned short)34068;
long long int var_9 = 7698163635289854521LL;
unsigned int var_10 = 793754580U;
int zero = 0;
long long int var_12 = 9079660490516983127LL;
long long int var_13 = -2206568060986216507LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
