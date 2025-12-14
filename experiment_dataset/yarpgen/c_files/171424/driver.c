#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12090716846162914677ULL;
long long int var_4 = -4267790409382166621LL;
int var_6 = 153552034;
signed char var_9 = (signed char)124;
int zero = 0;
signed char var_10 = (signed char)-53;
signed char var_11 = (signed char)55;
signed char var_12 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
