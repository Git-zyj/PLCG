#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1143177123U;
int var_6 = -1621629536;
int var_13 = -1099180841;
int var_18 = 1937600449;
int zero = 0;
long long int var_19 = -4027961272779166926LL;
int var_20 = 426229440;
int var_21 = 1642136991;
signed char var_22 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
