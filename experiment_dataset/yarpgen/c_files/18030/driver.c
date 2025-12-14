#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7599466149204311258LL;
unsigned short var_9 = (unsigned short)40257;
signed char var_10 = (signed char)36;
int zero = 0;
short var_11 = (short)17455;
unsigned short var_12 = (unsigned short)32115;
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
