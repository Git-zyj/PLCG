#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-114;
unsigned short var_15 = (unsigned short)55514;
int zero = 0;
unsigned long long int var_16 = 10037845277092948104ULL;
unsigned short var_17 = (unsigned short)25870;
unsigned int var_18 = 981417877U;
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
