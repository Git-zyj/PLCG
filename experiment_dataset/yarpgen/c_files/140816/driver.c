#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6174021781588621193LL;
unsigned long long int var_9 = 3809904418652894018ULL;
unsigned long long int var_10 = 14621231362595345915ULL;
int zero = 0;
long long int var_12 = 2446924574485668187LL;
unsigned int var_13 = 2443529586U;
unsigned long long int var_14 = 10299143897562173418ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
