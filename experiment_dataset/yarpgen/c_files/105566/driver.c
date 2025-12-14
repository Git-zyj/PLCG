#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
int var_5 = 422410465;
unsigned long long int var_7 = 7783932217780334917ULL;
signed char var_10 = (signed char)85;
unsigned char var_12 = (unsigned char)185;
int zero = 0;
short var_14 = (short)6347;
int var_15 = -863956560;
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
