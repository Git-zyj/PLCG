#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10600930247751209992ULL;
unsigned char var_9 = (unsigned char)153;
unsigned char var_11 = (unsigned char)4;
unsigned int var_14 = 4032713429U;
int zero = 0;
long long int var_17 = -3013603127749611077LL;
signed char var_18 = (signed char)-122;
unsigned short var_19 = (unsigned short)42545;
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
