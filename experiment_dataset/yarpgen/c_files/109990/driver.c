#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
signed char var_2 = (signed char)-98;
unsigned long long int var_11 = 7224817582710588767ULL;
int var_16 = 446434076;
int zero = 0;
int var_20 = -1019972970;
unsigned long long int var_21 = 3467565608508469289ULL;
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
