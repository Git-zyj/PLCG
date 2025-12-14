#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7132634632128220480LL;
int zero = 0;
signed char var_20 = (signed char)-120;
signed char var_21 = (signed char)-14;
signed char var_22 = (signed char)108;
unsigned long long int var_23 = 4165032547476647766ULL;
int var_24 = 43496848;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
