#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7125853913144577972ULL;
long long int var_3 = -2551083760728982083LL;
long long int var_5 = 1816922531748526542LL;
short var_7 = (short)14114;
long long int var_10 = -8253694545604493568LL;
int zero = 0;
unsigned short var_11 = (unsigned short)16071;
unsigned long long int var_12 = 14790113053846888011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
