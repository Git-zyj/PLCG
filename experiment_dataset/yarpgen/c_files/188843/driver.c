#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15866156884759990080ULL;
int var_4 = 1079582016;
unsigned long long int var_10 = 13686583040830699634ULL;
unsigned long long int var_11 = 13020540895434562603ULL;
int zero = 0;
int var_12 = -1725505037;
signed char var_13 = (signed char)24;
unsigned char var_14 = (unsigned char)133;
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
