#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5774063712831289844LL;
unsigned long long int var_2 = 13334179502886849937ULL;
short var_3 = (short)-32639;
long long int var_5 = -1063249456938340473LL;
unsigned short var_7 = (unsigned short)4477;
int zero = 0;
unsigned long long int var_10 = 12849646881579163457ULL;
signed char var_11 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
