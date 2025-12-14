#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7898;
unsigned long long int var_5 = 11876368880258628743ULL;
long long int var_9 = -6579347658174729910LL;
unsigned char var_11 = (unsigned char)164;
unsigned char var_12 = (unsigned char)79;
int zero = 0;
long long int var_15 = 6723931224223761722LL;
unsigned short var_16 = (unsigned short)1855;
long long int var_17 = 2382280825877518120LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
