#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)116;
unsigned int var_6 = 4020728023U;
signed char var_7 = (signed char)-101;
int var_12 = 1952851020;
int zero = 0;
unsigned long long int var_13 = 1790269251294567134ULL;
signed char var_14 = (signed char)123;
unsigned short var_15 = (unsigned short)57688;
unsigned int var_16 = 3383644629U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
