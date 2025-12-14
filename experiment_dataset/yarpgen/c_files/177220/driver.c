#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3623011893990201381LL;
unsigned long long int var_6 = 6089475299245374718ULL;
short var_7 = (short)29980;
int zero = 0;
unsigned char var_13 = (unsigned char)35;
unsigned char var_14 = (unsigned char)216;
unsigned long long int var_15 = 90017464584405262ULL;
void init() {
}

void checksum() {
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
