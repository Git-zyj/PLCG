#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11360930311086090327ULL;
short var_5 = (short)16403;
unsigned int var_9 = 2800288301U;
long long int var_10 = 2100437998886546117LL;
unsigned char var_16 = (unsigned char)67;
int zero = 0;
short var_17 = (short)31363;
long long int var_18 = -9213583522882763240LL;
unsigned long long int var_19 = 12420420604438173378ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
