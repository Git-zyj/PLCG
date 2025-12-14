#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3769553050596471300LL;
long long int var_7 = 7874870578841015486LL;
unsigned int var_9 = 343901277U;
int zero = 0;
short var_11 = (short)-5049;
signed char var_12 = (signed char)38;
unsigned char var_13 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
