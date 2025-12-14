#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)103;
unsigned long long int var_8 = 3798406267609988848ULL;
unsigned long long int var_10 = 4253713223610397972ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)510;
signed char var_18 = (signed char)67;
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
