#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1153770289475522702ULL;
unsigned int var_8 = 1420634534U;
int zero = 0;
unsigned int var_11 = 3139805778U;
long long int var_12 = -6818439187726530280LL;
unsigned short var_13 = (unsigned short)32955;
unsigned short var_14 = (unsigned short)46557;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
