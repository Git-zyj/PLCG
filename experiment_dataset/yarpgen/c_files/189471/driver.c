#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2458883643U;
unsigned long long int var_2 = 13832184023412077795ULL;
unsigned int var_3 = 29215165U;
unsigned char var_5 = (unsigned char)150;
int var_9 = 889385765;
int var_12 = -1640471076;
int zero = 0;
unsigned char var_14 = (unsigned char)60;
unsigned char var_15 = (unsigned char)23;
short var_16 = (short)-21441;
void init() {
}

void checksum() {
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
