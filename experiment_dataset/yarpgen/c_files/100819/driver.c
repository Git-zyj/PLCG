#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41660;
unsigned long long int var_6 = 14134794278053917452ULL;
unsigned short var_13 = (unsigned short)38381;
int zero = 0;
long long int var_15 = -8709817732095553208LL;
unsigned short var_16 = (unsigned short)43519;
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
