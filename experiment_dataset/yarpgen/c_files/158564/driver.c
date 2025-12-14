#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4961970231694065013LL;
int var_6 = 1969583724;
int var_11 = 1280550898;
int zero = 0;
unsigned short var_14 = (unsigned short)23283;
unsigned short var_15 = (unsigned short)49805;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
