#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13309;
unsigned long long int var_6 = 1889417853009949777ULL;
short var_9 = (short)-24389;
int zero = 0;
unsigned short var_10 = (unsigned short)38099;
unsigned long long int var_11 = 13421319484411575693ULL;
short var_12 = (short)-699;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
