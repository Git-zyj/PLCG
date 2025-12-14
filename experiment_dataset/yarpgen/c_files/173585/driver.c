#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -592356132;
int var_2 = 421039809;
int var_4 = -1663157179;
unsigned char var_7 = (unsigned char)58;
signed char var_8 = (signed char)110;
unsigned int var_9 = 2832731178U;
int zero = 0;
long long int var_10 = 7955782516223346733LL;
unsigned char var_11 = (unsigned char)188;
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
