#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)38;
long long int var_5 = 6341730279184416799LL;
signed char var_6 = (signed char)-62;
signed char var_12 = (signed char)-53;
signed char var_14 = (signed char)-31;
int zero = 0;
long long int var_16 = -8593571097112087083LL;
long long int var_17 = -1341731648821986872LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
