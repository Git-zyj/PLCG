#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30788;
unsigned int var_5 = 2778367880U;
unsigned long long int var_6 = 7384403063631396267ULL;
short var_7 = (short)3281;
int zero = 0;
signed char var_12 = (signed char)-16;
short var_13 = (short)2949;
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
