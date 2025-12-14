#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8228864098130862391LL;
signed char var_1 = (signed char)-114;
int var_7 = -920339915;
unsigned int var_11 = 4179838613U;
int zero = 0;
int var_12 = -304128449;
int var_13 = -1821834707;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
