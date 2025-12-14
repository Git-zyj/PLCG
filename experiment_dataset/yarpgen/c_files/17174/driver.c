#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2476260749U;
long long int var_3 = 7761300958439362964LL;
unsigned short var_4 = (unsigned short)47905;
int zero = 0;
unsigned int var_12 = 4282138376U;
unsigned long long int var_13 = 14841218056821595185ULL;
int var_14 = -141515779;
unsigned char var_15 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
