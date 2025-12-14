#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28172;
unsigned short var_11 = (unsigned short)9366;
int zero = 0;
long long int var_12 = -7373450573108640184LL;
unsigned long long int var_13 = 4408613052435492110ULL;
int var_14 = -1855028702;
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
