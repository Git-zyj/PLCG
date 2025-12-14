#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)27;
unsigned short var_12 = (unsigned short)63562;
signed char var_14 = (signed char)66;
int zero = 0;
unsigned short var_16 = (unsigned short)27519;
unsigned short var_17 = (unsigned short)20634;
long long int var_18 = -6691875291101067734LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
