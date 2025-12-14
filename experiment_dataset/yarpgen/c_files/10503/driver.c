#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8809885794367045148LL;
unsigned char var_1 = (unsigned char)246;
int var_4 = -111361749;
unsigned short var_8 = (unsigned short)40787;
unsigned char var_9 = (unsigned char)97;
int zero = 0;
long long int var_13 = -2436768154524117153LL;
int var_14 = 253175090;
unsigned char var_15 = (unsigned char)155;
int var_16 = 1918195468;
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
