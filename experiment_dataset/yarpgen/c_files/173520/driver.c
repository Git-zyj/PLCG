#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4445056669982147773LL;
int var_10 = -957326973;
int zero = 0;
unsigned long long int var_11 = 8117543504066702231ULL;
int var_12 = 1220078932;
unsigned short var_13 = (unsigned short)12549;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
