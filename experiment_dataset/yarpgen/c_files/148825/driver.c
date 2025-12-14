#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3546;
unsigned long long int var_3 = 16558563187285454528ULL;
signed char var_4 = (signed char)62;
unsigned short var_5 = (unsigned short)47925;
short var_8 = (short)3687;
int zero = 0;
unsigned long long int var_10 = 4165831764303190726ULL;
signed char var_11 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
