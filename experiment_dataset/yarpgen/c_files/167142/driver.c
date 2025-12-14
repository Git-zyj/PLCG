#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-34;
long long int var_6 = 6554837193084191943LL;
unsigned long long int var_7 = 9625319098047581379ULL;
short var_11 = (short)-3750;
unsigned long long int var_14 = 3759801631453230548ULL;
int zero = 0;
unsigned long long int var_16 = 10119388466755637472ULL;
long long int var_17 = 5395858780490024395LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
