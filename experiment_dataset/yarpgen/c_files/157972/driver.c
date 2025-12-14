#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
long long int var_3 = -5223902883363025869LL;
unsigned int var_10 = 4076655848U;
signed char var_11 = (signed char)-96;
int zero = 0;
unsigned char var_13 = (unsigned char)26;
unsigned char var_14 = (unsigned char)203;
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
