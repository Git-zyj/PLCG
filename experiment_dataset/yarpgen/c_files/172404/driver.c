#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 134245386773322873ULL;
long long int var_1 = -1192959072766523164LL;
unsigned long long int var_12 = 9416312058914225264ULL;
int zero = 0;
short var_20 = (short)-6954;
unsigned long long int var_21 = 8357756949190486868ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
