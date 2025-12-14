#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -117093614;
signed char var_4 = (signed char)-17;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
unsigned int var_11 = 1435972598U;
long long int var_12 = 1962623744823938172LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
