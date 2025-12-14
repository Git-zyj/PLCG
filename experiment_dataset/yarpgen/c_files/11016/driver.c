#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)232;
unsigned short var_8 = (unsigned short)49985;
long long int var_9 = 4237878650917256879LL;
int zero = 0;
long long int var_11 = -5590372198185843534LL;
long long int var_12 = -289163866488834402LL;
unsigned char var_13 = (unsigned char)44;
unsigned short var_14 = (unsigned short)33112;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
