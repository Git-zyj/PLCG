#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7291050587025783084ULL;
unsigned char var_13 = (unsigned char)174;
int var_17 = -1461243956;
int zero = 0;
long long int var_18 = 6581096897443681781LL;
unsigned char var_19 = (unsigned char)185;
signed char var_20 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
