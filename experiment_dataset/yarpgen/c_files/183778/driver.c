#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 38524264;
unsigned long long int var_18 = 13343655944852231285ULL;
unsigned int var_19 = 3982320244U;
int zero = 0;
int var_20 = 1614407900;
unsigned short var_21 = (unsigned short)3606;
unsigned long long int var_22 = 1064526517432135361ULL;
void init() {
}

void checksum() {
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
