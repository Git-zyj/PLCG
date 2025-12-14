#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 913359221U;
signed char var_9 = (signed char)25;
unsigned int var_10 = 473900678U;
short var_13 = (short)-16290;
unsigned char var_15 = (unsigned char)196;
int zero = 0;
short var_18 = (short)-19911;
unsigned long long int var_19 = 10740713708396116396ULL;
unsigned int var_20 = 2443009U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
