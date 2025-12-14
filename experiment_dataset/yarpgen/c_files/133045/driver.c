#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-16174;
signed char var_11 = (signed char)68;
long long int var_15 = -6804081883841761391LL;
int zero = 0;
int var_16 = 1685738657;
unsigned long long int var_17 = 10499777063762603594ULL;
unsigned char var_18 = (unsigned char)92;
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
