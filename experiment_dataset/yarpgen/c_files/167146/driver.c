#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6874355785161987069LL;
signed char var_3 = (signed char)-39;
signed char var_6 = (signed char)-108;
int zero = 0;
long long int var_17 = 4428111271432199576LL;
int var_18 = 1120111914;
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
