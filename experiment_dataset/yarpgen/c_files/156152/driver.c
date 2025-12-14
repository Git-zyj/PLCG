#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1629617999U;
long long int var_4 = 6929796711907955201LL;
unsigned long long int var_6 = 13865930127660850691ULL;
int zero = 0;
unsigned int var_18 = 2900117275U;
unsigned long long int var_19 = 684438687043308082ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
