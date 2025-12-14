#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)95;
unsigned short var_4 = (unsigned short)36489;
unsigned int var_9 = 2364442885U;
int zero = 0;
unsigned long long int var_11 = 16516746239831489791ULL;
unsigned int var_12 = 3528075707U;
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
