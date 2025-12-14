#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6853401541355626709LL;
long long int var_4 = 1416696567463825144LL;
signed char var_6 = (signed char)107;
long long int var_9 = -8883739310306246714LL;
int zero = 0;
signed char var_10 = (signed char)-127;
signed char var_11 = (signed char)-20;
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
