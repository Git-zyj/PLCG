#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned char var_4 = (unsigned char)2;
long long int var_6 = -1059751147184383166LL;
short var_8 = (short)13538;
int zero = 0;
unsigned int var_10 = 1380638076U;
unsigned long long int var_11 = 13768056354535014458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
