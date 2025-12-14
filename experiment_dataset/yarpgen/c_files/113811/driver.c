#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12152;
signed char var_5 = (signed char)79;
signed char var_8 = (signed char)-6;
signed char var_15 = (signed char)-80;
int zero = 0;
long long int var_17 = 4231252836750669776LL;
long long int var_18 = 8353245439071214741LL;
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
