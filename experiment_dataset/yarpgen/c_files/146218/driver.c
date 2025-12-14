#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -678598912;
unsigned char var_1 = (unsigned char)242;
unsigned int var_7 = 2893090535U;
int var_9 = -1013680136;
unsigned char var_12 = (unsigned char)117;
int zero = 0;
unsigned int var_13 = 1186179687U;
unsigned long long int var_14 = 9718764698386844062ULL;
void init() {
}

void checksum() {
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
