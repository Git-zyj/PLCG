#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1160433625;
unsigned char var_2 = (unsigned char)17;
long long int var_6 = 1622576009262843843LL;
int var_7 = -1498736850;
unsigned char var_9 = (unsigned char)227;
long long int var_10 = 283399472956134181LL;
int var_11 = 1386398313;
int zero = 0;
unsigned char var_13 = (unsigned char)114;
unsigned char var_14 = (unsigned char)212;
unsigned char var_15 = (unsigned char)187;
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
