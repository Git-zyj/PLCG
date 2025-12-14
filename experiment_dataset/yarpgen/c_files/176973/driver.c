#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -798896134;
unsigned long long int var_4 = 9494155170482580450ULL;
long long int var_5 = 1296435194617973189LL;
unsigned short var_9 = (unsigned short)21464;
int zero = 0;
unsigned int var_10 = 1661058251U;
long long int var_11 = -8717217287801604246LL;
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
