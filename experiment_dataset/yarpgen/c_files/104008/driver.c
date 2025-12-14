#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
signed char var_3 = (signed char)14;
signed char var_8 = (signed char)-35;
signed char var_10 = (signed char)26;
signed char var_11 = (signed char)105;
int zero = 0;
signed char var_12 = (signed char)-91;
signed char var_13 = (signed char)64;
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
