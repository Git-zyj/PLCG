#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -931659809360730011LL;
unsigned long long int var_2 = 16678365289078503130ULL;
short var_4 = (short)-29542;
unsigned long long int var_7 = 6265150920556824456ULL;
unsigned short var_8 = (unsigned short)43407;
int zero = 0;
unsigned long long int var_14 = 8531837794149564246ULL;
short var_15 = (short)30256;
void init() {
}

void checksum() {
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
