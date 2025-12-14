#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7781497964049132606LL;
unsigned short var_13 = (unsigned short)20784;
unsigned long long int var_14 = 16899535218811556107ULL;
int zero = 0;
long long int var_15 = -1062693226056346505LL;
unsigned short var_16 = (unsigned short)26379;
void init() {
}

void checksum() {
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
