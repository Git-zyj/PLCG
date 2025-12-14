#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
long long int var_2 = 3157440102897530387LL;
short var_5 = (short)23249;
unsigned long long int var_7 = 14017754525017060073ULL;
signed char var_14 = (signed char)-4;
int zero = 0;
unsigned long long int var_17 = 9315266413584778881ULL;
unsigned short var_18 = (unsigned short)38805;
void init() {
}

void checksum() {
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
