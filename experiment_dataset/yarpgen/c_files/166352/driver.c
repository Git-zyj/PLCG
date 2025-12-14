#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17348044129100284029ULL;
long long int var_10 = 767667284943108906LL;
unsigned char var_13 = (unsigned char)22;
int zero = 0;
unsigned long long int var_14 = 2094975058622413804ULL;
signed char var_15 = (signed char)82;
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
