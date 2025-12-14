#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11486082546645215247ULL;
signed char var_4 = (signed char)97;
long long int var_6 = 7378401346633503826LL;
int var_16 = 1654527691;
int zero = 0;
long long int var_18 = -3143688356049793022LL;
long long int var_19 = -1568029801350532069LL;
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
