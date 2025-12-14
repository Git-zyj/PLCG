#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5507703133106265623ULL;
int var_3 = 1914676125;
int var_7 = 2123104629;
int zero = 0;
unsigned long long int var_15 = 1892846002434407810ULL;
int var_16 = 1746604590;
short var_17 = (short)-5491;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
