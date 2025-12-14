#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3808477607461255772ULL;
short var_8 = (short)-207;
unsigned long long int var_9 = 2416537722916271909ULL;
unsigned long long int var_10 = 18120366130957928453ULL;
int zero = 0;
int var_11 = 2070199886;
unsigned int var_12 = 3528350989U;
unsigned long long int var_13 = 10126581215699868379ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
