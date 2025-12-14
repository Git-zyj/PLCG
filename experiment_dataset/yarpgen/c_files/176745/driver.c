#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1555381870;
signed char var_3 = (signed char)39;
unsigned short var_6 = (unsigned short)46971;
int zero = 0;
unsigned short var_10 = (unsigned short)39231;
unsigned long long int var_11 = 5400505119017112063ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
