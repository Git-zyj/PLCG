#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6938308932115875727ULL;
unsigned int var_9 = 3319816514U;
unsigned short var_10 = (unsigned short)61455;
int zero = 0;
unsigned short var_13 = (unsigned short)29245;
short var_14 = (short)31856;
unsigned char var_15 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
