#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 221862893;
unsigned int var_4 = 2681623031U;
unsigned int var_5 = 2270314889U;
unsigned char var_6 = (unsigned char)153;
unsigned int var_9 = 2405500883U;
int zero = 0;
long long int var_10 = 7978540651911915236LL;
int var_11 = 2017507123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
