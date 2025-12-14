#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5270080433590565037LL;
unsigned long long int var_3 = 13992456766044694129ULL;
unsigned long long int var_6 = 1796446653314460729ULL;
unsigned short var_8 = (unsigned short)37930;
short var_10 = (short)22930;
int zero = 0;
short var_12 = (short)-8866;
unsigned char var_13 = (unsigned char)67;
long long int var_14 = -6823687743993016681LL;
unsigned short var_15 = (unsigned short)31585;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
