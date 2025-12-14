#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -348319469;
short var_9 = (short)-12885;
long long int var_11 = -3338454319836482105LL;
short var_12 = (short)7841;
int zero = 0;
int var_13 = -458288387;
signed char var_14 = (signed char)-107;
unsigned long long int var_15 = 10256155710951577223ULL;
long long int var_16 = -2643609545667694701LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
