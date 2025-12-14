#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2360880832934063024LL;
unsigned char var_1 = (unsigned char)88;
long long int var_3 = 4458533409816956397LL;
short var_9 = (short)16465;
int zero = 0;
unsigned char var_12 = (unsigned char)176;
unsigned short var_13 = (unsigned short)39230;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
