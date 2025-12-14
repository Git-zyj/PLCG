#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2225362566U;
unsigned int var_2 = 4217239537U;
short var_4 = (short)-26571;
long long int var_9 = -2078798152054086417LL;
unsigned char var_11 = (unsigned char)200;
int zero = 0;
unsigned long long int var_13 = 9876361198466868135ULL;
unsigned char var_14 = (unsigned char)41;
void init() {
}

void checksum() {
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
