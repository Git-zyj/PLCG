#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
signed char var_1 = (signed char)23;
signed char var_2 = (signed char)127;
signed char var_3 = (signed char)4;
signed char var_8 = (signed char)-114;
signed char var_10 = (signed char)24;
signed char var_12 = (signed char)-46;
signed char var_13 = (signed char)102;
int zero = 0;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)-1;
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
