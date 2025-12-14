#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23011;
long long int var_2 = -8861549028408034028LL;
unsigned short var_3 = (unsigned short)49334;
int zero = 0;
long long int var_11 = -622533220525727512LL;
long long int var_12 = -5206501343295842493LL;
unsigned short var_13 = (unsigned short)18777;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
