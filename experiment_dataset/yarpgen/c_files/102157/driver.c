#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)85;
signed char var_4 = (signed char)70;
signed char var_6 = (signed char)-43;
int var_7 = 1787315215;
int zero = 0;
signed char var_14 = (signed char)81;
int var_15 = -1953120120;
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
