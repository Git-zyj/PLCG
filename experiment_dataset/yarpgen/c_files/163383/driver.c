#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 305259135994987869LL;
signed char var_5 = (signed char)-66;
long long int var_7 = -6014706594287723694LL;
unsigned char var_10 = (unsigned char)125;
int zero = 0;
long long int var_15 = -7115821112284219642LL;
unsigned long long int var_16 = 16606072432730178855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
