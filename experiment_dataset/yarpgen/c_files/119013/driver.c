#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7104615009911900958LL;
long long int var_14 = 2541263209861379132LL;
int zero = 0;
short var_15 = (short)11256;
unsigned short var_16 = (unsigned short)13785;
unsigned long long int var_17 = 2376987720208913184ULL;
int var_18 = -1098182623;
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
