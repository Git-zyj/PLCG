#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-68;
unsigned long long int var_2 = 14321603504499389382ULL;
unsigned char var_4 = (unsigned char)32;
long long int var_10 = 4959016153936815676LL;
int zero = 0;
signed char var_11 = (signed char)-40;
long long int var_12 = 484712272395456741LL;
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
