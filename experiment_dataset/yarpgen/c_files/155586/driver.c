#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2525878743082504124LL;
signed char var_9 = (signed char)-31;
short var_10 = (short)20086;
short var_11 = (short)28983;
long long int var_16 = 855634837689095287LL;
unsigned char var_17 = (unsigned char)0;
int zero = 0;
short var_19 = (short)4377;
signed char var_20 = (signed char)64;
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
