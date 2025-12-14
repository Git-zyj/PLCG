#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27162;
unsigned long long int var_2 = 16188118055119645340ULL;
int var_4 = 1714994429;
int var_13 = 1642896098;
long long int var_14 = 7802306135203256989LL;
int zero = 0;
short var_19 = (short)-1330;
long long int var_20 = 977694990723693927LL;
void init() {
}

void checksum() {
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
