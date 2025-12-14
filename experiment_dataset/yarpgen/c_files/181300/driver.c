#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7371;
unsigned short var_5 = (unsigned short)37839;
int var_7 = -1844848906;
int zero = 0;
unsigned long long int var_14 = 10548139815500778571ULL;
unsigned int var_15 = 2311609576U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
