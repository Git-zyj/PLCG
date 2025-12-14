#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3400866705U;
int zero = 0;
unsigned long long int var_14 = 12318836116394758765ULL;
short var_15 = (short)-5905;
unsigned short var_16 = (unsigned short)57873;
unsigned short var_17 = (unsigned short)61458;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
