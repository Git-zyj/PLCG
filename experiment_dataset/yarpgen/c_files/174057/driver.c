#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14648926210477080155ULL;
int var_13 = 828418569;
long long int var_14 = -2511499657193036536LL;
unsigned char var_17 = (unsigned char)72;
int zero = 0;
unsigned long long int var_18 = 16588546925346934723ULL;
unsigned char var_19 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
