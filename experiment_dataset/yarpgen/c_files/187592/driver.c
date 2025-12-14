#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5882010873098555109LL;
int zero = 0;
unsigned int var_18 = 1718113367U;
unsigned long long int var_19 = 1921114152139781968ULL;
int var_20 = 596464336;
unsigned char var_21 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
