#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4363486397762502182ULL;
unsigned int var_3 = 860214498U;
unsigned int var_12 = 3777363526U;
long long int var_17 = 7531019558604119660LL;
unsigned int var_18 = 396500181U;
int zero = 0;
unsigned int var_19 = 4194569874U;
unsigned long long int var_20 = 6031380101207917519ULL;
void init() {
}

void checksum() {
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
