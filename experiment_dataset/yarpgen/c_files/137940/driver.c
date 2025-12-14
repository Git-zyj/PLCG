#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1722463675047686358LL;
unsigned char var_9 = (unsigned char)71;
int zero = 0;
unsigned int var_16 = 3238761023U;
long long int var_17 = -6256949757167497667LL;
int var_18 = -1713650485;
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
