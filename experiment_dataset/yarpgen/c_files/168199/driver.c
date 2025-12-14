#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12864161323861589292ULL;
unsigned long long int var_3 = 11790230068599032471ULL;
unsigned long long int var_6 = 3394172171877094758ULL;
int zero = 0;
int var_12 = -1729645996;
int var_13 = -726672948;
signed char var_14 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
