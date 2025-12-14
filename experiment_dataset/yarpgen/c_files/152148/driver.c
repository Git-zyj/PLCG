#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2488;
unsigned long long int var_3 = 6940059040490668134ULL;
int var_5 = 307366113;
int zero = 0;
int var_12 = -935978338;
unsigned short var_13 = (unsigned short)19144;
unsigned int var_14 = 2879373937U;
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
