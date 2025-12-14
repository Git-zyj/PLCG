#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18129593372857538616ULL;
unsigned long long int var_4 = 11110159233868450215ULL;
signed char var_6 = (signed char)72;
long long int var_8 = -568535359180764430LL;
int zero = 0;
unsigned long long int var_13 = 1794744321221027729ULL;
unsigned char var_14 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
