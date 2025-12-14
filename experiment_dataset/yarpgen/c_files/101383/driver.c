#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3224505075476292592LL;
long long int var_1 = -520586006430437595LL;
long long int var_2 = -628642589615080497LL;
long long int var_7 = 5262442529182385431LL;
long long int var_11 = 2028639903572230767LL;
int zero = 0;
long long int var_12 = 7479863238889216282LL;
long long int var_13 = 3716018989614156347LL;
void init() {
}

void checksum() {
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
