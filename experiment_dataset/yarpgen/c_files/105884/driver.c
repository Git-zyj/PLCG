#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12540976749424858003ULL;
unsigned long long int var_1 = 15898013241684854458ULL;
unsigned long long int var_3 = 1437203812467237221ULL;
unsigned long long int var_4 = 3917924406057590710ULL;
unsigned long long int var_11 = 11006833231889171553ULL;
int zero = 0;
unsigned long long int var_12 = 18294481733834133765ULL;
unsigned long long int var_13 = 1373108332636779009ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
