#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)43191;
unsigned long long int var_5 = 5834975776375322490ULL;
unsigned long long int var_7 = 8496502169006127399ULL;
unsigned long long int var_10 = 395393474810112188ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
signed char var_16 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
