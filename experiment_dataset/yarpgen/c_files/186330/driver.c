#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18156891960019000300ULL;
long long int var_7 = -7539989159184618019LL;
long long int var_8 = -7751318291747085305LL;
signed char var_9 = (signed char)69;
signed char var_12 = (signed char)23;
int zero = 0;
short var_15 = (short)-12887;
signed char var_16 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
