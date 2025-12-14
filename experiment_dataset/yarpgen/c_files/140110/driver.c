#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7819640112060396165ULL;
unsigned int var_6 = 345348085U;
unsigned long long int var_7 = 1663270995908961589ULL;
unsigned long long int var_12 = 9339863283005905095ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)45735;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
