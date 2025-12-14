#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4353339400053923466LL;
unsigned long long int var_1 = 14288388049135563365ULL;
unsigned long long int var_8 = 14594392600652862950ULL;
long long int var_10 = 3784817106432906189LL;
long long int var_11 = 3476747554264995866LL;
long long int var_12 = 9222533580160398162LL;
int zero = 0;
long long int var_15 = 1290547363924805328LL;
unsigned long long int var_16 = 7091472041034543043ULL;
unsigned long long int var_17 = 10708960448219780576ULL;
long long int var_18 = -8237005066155489605LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
