#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5546082606451541185LL;
short var_14 = (short)2436;
long long int var_16 = 846346951731761240LL;
int zero = 0;
unsigned long long int var_17 = 4244646122313893388ULL;
unsigned char var_18 = (unsigned char)70;
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
