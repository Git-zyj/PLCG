#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 717660715893539561LL;
short var_9 = (short)27405;
int zero = 0;
unsigned short var_10 = (unsigned short)1290;
unsigned short var_11 = (unsigned short)30269;
long long int var_12 = 9133136529534174012LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
