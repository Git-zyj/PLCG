#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)10;
unsigned short var_13 = (unsigned short)22483;
short var_15 = (short)22952;
int zero = 0;
unsigned long long int var_16 = 15480392659562726917ULL;
long long int var_17 = -5808383344673378153LL;
void init() {
}

void checksum() {
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
