#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
signed char var_3 = (signed char)-29;
int var_5 = 1382998175;
unsigned long long int var_10 = 8026385772412169807ULL;
int zero = 0;
signed char var_11 = (signed char)72;
signed char var_12 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
