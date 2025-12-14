#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1945271598142790501LL;
unsigned long long int var_3 = 16520147647793390835ULL;
unsigned long long int var_7 = 16087036972582451238ULL;
long long int var_9 = -3685873804883037595LL;
int var_10 = -667393515;
unsigned long long int var_13 = 3338137840185639792ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)151;
long long int var_15 = -7917269318429724027LL;
unsigned short var_16 = (unsigned short)63218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
