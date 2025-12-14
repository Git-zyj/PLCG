#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8348365085913171717ULL;
short var_9 = (short)16068;
_Bool var_10 = (_Bool)1;
int var_13 = -1808261548;
int zero = 0;
int var_14 = 121119476;
unsigned int var_15 = 2286243722U;
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
