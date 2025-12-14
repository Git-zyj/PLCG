#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10704990192790929107ULL;
unsigned int var_5 = 1223983456U;
unsigned char var_13 = (unsigned char)168;
int zero = 0;
unsigned short var_17 = (unsigned short)39581;
unsigned int var_18 = 2015539274U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
