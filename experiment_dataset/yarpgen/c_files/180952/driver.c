#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16852;
unsigned long long int var_2 = 3135110182752593141ULL;
unsigned int var_9 = 3834865278U;
int zero = 0;
short var_10 = (short)1970;
long long int var_11 = -2100595972818687985LL;
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
