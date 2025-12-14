#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7635660407297763881LL;
signed char var_6 = (signed char)-103;
short var_10 = (short)-28771;
signed char var_15 = (signed char)-90;
unsigned int var_16 = 2396725639U;
int zero = 0;
signed char var_19 = (signed char)-40;
signed char var_20 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
