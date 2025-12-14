#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7938935789001279356LL;
short var_11 = (short)-904;
long long int var_14 = -453287745158792285LL;
unsigned long long int var_15 = 15120781286328149758ULL;
int zero = 0;
unsigned long long int var_16 = 16368857748505984697ULL;
unsigned short var_17 = (unsigned short)27810;
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
