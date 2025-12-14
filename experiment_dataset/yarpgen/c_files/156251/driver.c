#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29009;
unsigned long long int var_4 = 12025692730515840198ULL;
short var_5 = (short)-21846;
unsigned int var_6 = 164732701U;
short var_10 = (short)-1458;
unsigned short var_15 = (unsigned short)4040;
int zero = 0;
unsigned short var_16 = (unsigned short)12978;
long long int var_17 = -6711876287650803110LL;
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
