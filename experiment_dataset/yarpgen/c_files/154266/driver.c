#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2008378818;
unsigned long long int var_12 = 9709513959634020002ULL;
unsigned long long int var_13 = 2205377365515820930ULL;
int var_15 = -1757932797;
int zero = 0;
int var_19 = -516236736;
unsigned int var_20 = 2817385852U;
long long int var_21 = -7534481170276948395LL;
int var_22 = 97453091;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
