#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)18929;
short var_12 = (short)20624;
unsigned long long int var_14 = 3462091928034607171ULL;
int zero = 0;
unsigned long long int var_16 = 9725975789035801012ULL;
unsigned long long int var_17 = 9640131454668262124ULL;
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
