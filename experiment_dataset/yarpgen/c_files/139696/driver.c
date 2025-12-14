#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11985;
int var_5 = 1710588239;
unsigned char var_13 = (unsigned char)30;
long long int var_14 = -6222955770566546296LL;
long long int var_18 = 7806862156422673967LL;
int zero = 0;
unsigned long long int var_19 = 8278513346551321155ULL;
int var_20 = 1066807655;
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
