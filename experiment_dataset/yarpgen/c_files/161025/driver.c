#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned short var_2 = (unsigned short)45673;
unsigned short var_9 = (unsigned short)1212;
int zero = 0;
short var_15 = (short)-28601;
unsigned long long int var_16 = 8096265887916694262ULL;
int var_17 = 152049914;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
