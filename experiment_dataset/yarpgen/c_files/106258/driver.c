#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58691;
unsigned int var_5 = 3684082181U;
unsigned long long int var_14 = 6328722892944685045ULL;
int zero = 0;
long long int var_16 = -2726791583501949008LL;
unsigned short var_17 = (unsigned short)27276;
long long int var_18 = 457417899330180332LL;
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
