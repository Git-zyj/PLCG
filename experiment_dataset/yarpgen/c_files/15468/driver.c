#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
signed char var_3 = (signed char)89;
unsigned long long int var_4 = 3712869974958953292ULL;
signed char var_11 = (signed char)-8;
int zero = 0;
unsigned int var_20 = 3355234379U;
int var_21 = 1913167841;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
