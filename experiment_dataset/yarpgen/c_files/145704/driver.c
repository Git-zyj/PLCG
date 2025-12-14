#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 934593911;
unsigned long long int var_10 = 3628391075152941316ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)63817;
unsigned long long int var_15 = 7873553394816064810ULL;
unsigned short var_16 = (unsigned short)22594;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
