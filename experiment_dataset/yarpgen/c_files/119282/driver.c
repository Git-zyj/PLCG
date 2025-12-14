#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
signed char var_5 = (signed char)25;
signed char var_7 = (signed char)119;
signed char var_10 = (signed char)60;
signed char var_13 = (signed char)-8;
int zero = 0;
signed char var_14 = (signed char)32;
signed char var_15 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
