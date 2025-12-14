#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1769519299560083567LL;
unsigned int var_4 = 1767519764U;
unsigned long long int var_5 = 4930001515816109967ULL;
unsigned char var_7 = (unsigned char)30;
long long int var_9 = 1703875028830209639LL;
unsigned int var_11 = 1299305476U;
int zero = 0;
int var_12 = 806595433;
unsigned char var_13 = (unsigned char)182;
int var_14 = -1521966255;
unsigned short var_15 = (unsigned short)6435;
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
