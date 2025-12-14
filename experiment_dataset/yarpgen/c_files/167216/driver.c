#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48935;
long long int var_4 = 984266740971529616LL;
unsigned long long int var_6 = 12981497419169610870ULL;
signed char var_8 = (signed char)-73;
unsigned char var_12 = (unsigned char)184;
int zero = 0;
unsigned char var_13 = (unsigned char)122;
signed char var_14 = (signed char)-113;
long long int var_15 = -704024278021314723LL;
unsigned short var_16 = (unsigned short)54660;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
