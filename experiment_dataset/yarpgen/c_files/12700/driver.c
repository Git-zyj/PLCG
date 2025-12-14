#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2434637771143050704LL;
int var_13 = 285177665;
int zero = 0;
unsigned long long int var_17 = 12629904515544472594ULL;
unsigned short var_18 = (unsigned short)21145;
unsigned int var_19 = 877654098U;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
