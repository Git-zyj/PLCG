#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -287965635893975388LL;
long long int var_2 = 6931087445459656014LL;
unsigned char var_7 = (unsigned char)149;
long long int var_10 = 4543455269183098083LL;
int zero = 0;
short var_11 = (short)9133;
short var_12 = (short)24807;
short var_13 = (short)24299;
long long int var_14 = -4059551047530970842LL;
long long int var_15 = 5391693793704165263LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
