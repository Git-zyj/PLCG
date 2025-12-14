#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6280;
short var_5 = (short)-4289;
unsigned long long int var_10 = 12578213599606656870ULL;
unsigned int var_13 = 1537795046U;
unsigned long long int var_15 = 14038672537524419665ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)31172;
unsigned long long int var_17 = 94329842153549726ULL;
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
