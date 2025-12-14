#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
unsigned short var_4 = (unsigned short)57346;
signed char var_6 = (signed char)36;
short var_9 = (short)18801;
unsigned short var_10 = (unsigned short)40665;
int var_11 = -835870983;
unsigned short var_13 = (unsigned short)22380;
int zero = 0;
long long int var_14 = -5911865967079505984LL;
unsigned char var_15 = (unsigned char)211;
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
