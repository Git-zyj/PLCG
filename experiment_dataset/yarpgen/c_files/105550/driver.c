#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)18502;
long long int var_11 = 5343338434313750797LL;
unsigned long long int var_13 = 16226083845758234236ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)7355;
unsigned long long int var_15 = 12148300724071812562ULL;
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
