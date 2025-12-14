#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5503358675109162513LL;
unsigned char var_1 = (unsigned char)79;
short var_2 = (short)-11012;
int zero = 0;
long long int var_10 = 3087418871373363124LL;
int var_11 = 1835174754;
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
