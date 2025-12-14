#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5198302560599875446LL;
long long int var_2 = -5778794970088255443LL;
signed char var_12 = (signed char)-35;
int zero = 0;
unsigned long long int var_13 = 7794595401442003115ULL;
short var_14 = (short)-22222;
void init() {
}

void checksum() {
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
