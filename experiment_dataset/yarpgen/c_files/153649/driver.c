#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-38;
signed char var_5 = (signed char)-121;
signed char var_6 = (signed char)-125;
signed char var_8 = (signed char)65;
signed char var_12 = (signed char)-115;
signed char var_14 = (signed char)-53;
int zero = 0;
signed char var_19 = (signed char)3;
signed char var_20 = (signed char)78;
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
