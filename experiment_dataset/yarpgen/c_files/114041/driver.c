#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)48;
signed char var_5 = (signed char)-39;
signed char var_10 = (signed char)-44;
int zero = 0;
signed char var_14 = (signed char)64;
signed char var_15 = (signed char)-72;
signed char var_16 = (signed char)-46;
void init() {
}

void checksum() {
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
