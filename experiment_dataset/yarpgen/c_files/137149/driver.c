#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1808808186323768718ULL;
long long int var_7 = 2515410149795100106LL;
int zero = 0;
unsigned short var_18 = (unsigned short)29013;
signed char var_19 = (signed char)109;
unsigned char var_20 = (unsigned char)217;
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
