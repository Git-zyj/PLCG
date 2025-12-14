#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12110;
int var_3 = -633854393;
short var_5 = (short)4562;
signed char var_18 = (signed char)-33;
int zero = 0;
unsigned long long int var_19 = 8212334940160048705ULL;
long long int var_20 = -4317651866952056435LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
