#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 431151971855310840LL;
unsigned char var_6 = (unsigned char)89;
unsigned long long int var_8 = 6930111364658206268ULL;
signed char var_9 = (signed char)-73;
unsigned long long int var_10 = 159662909952424168ULL;
int zero = 0;
signed char var_15 = (signed char)81;
int var_16 = -1242505978;
void init() {
}

void checksum() {
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
