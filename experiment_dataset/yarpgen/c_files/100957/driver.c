#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3220656513U;
int var_6 = -709794391;
long long int var_13 = 3178509111557107402LL;
int zero = 0;
unsigned int var_17 = 3039869556U;
unsigned char var_18 = (unsigned char)193;
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
