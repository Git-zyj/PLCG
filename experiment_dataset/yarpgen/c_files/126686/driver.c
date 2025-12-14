#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-97;
unsigned long long int var_4 = 565554378519259547ULL;
int var_6 = 1548445735;
int var_9 = -1871722938;
int zero = 0;
short var_11 = (short)-6;
unsigned long long int var_12 = 13771927990758277395ULL;
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
