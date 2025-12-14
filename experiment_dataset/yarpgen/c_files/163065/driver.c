#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 904158032;
unsigned long long int var_11 = 6313727124822748590ULL;
long long int var_12 = 2419994940152953347LL;
int zero = 0;
unsigned long long int var_20 = 15897715970475937704ULL;
unsigned int var_21 = 4186180854U;
signed char var_22 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
