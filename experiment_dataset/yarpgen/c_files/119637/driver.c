#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
long long int var_1 = 2476756919270110598LL;
short var_2 = (short)-22140;
unsigned int var_5 = 1534984050U;
int zero = 0;
unsigned short var_19 = (unsigned short)63468;
short var_20 = (short)15876;
unsigned char var_21 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
