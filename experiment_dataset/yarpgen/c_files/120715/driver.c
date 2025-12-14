#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
unsigned long long int var_2 = 9469685605899350530ULL;
short var_5 = (short)-5582;
int var_14 = 679790282;
long long int var_16 = -2158151112327222230LL;
int zero = 0;
unsigned int var_17 = 548764139U;
unsigned char var_18 = (unsigned char)174;
void init() {
}

void checksum() {
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
