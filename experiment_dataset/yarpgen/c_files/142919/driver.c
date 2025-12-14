#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4066285233U;
unsigned int var_2 = 4217500765U;
unsigned int var_3 = 2053102643U;
unsigned char var_4 = (unsigned char)166;
int var_15 = 1011574211;
int zero = 0;
unsigned long long int var_16 = 10828955598993629718ULL;
unsigned long long int var_17 = 12785248598395348208ULL;
unsigned int var_18 = 294380703U;
void init() {
}

void checksum() {
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
