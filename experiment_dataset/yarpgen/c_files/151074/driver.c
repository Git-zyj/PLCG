#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)22387;
long long int var_7 = -679710544372813987LL;
unsigned char var_9 = (unsigned char)244;
unsigned short var_11 = (unsigned short)53046;
int zero = 0;
unsigned short var_14 = (unsigned short)53405;
long long int var_15 = 1027532890140801259LL;
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
