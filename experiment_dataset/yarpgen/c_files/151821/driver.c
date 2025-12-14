#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7653908344384932425LL;
unsigned char var_3 = (unsigned char)77;
unsigned char var_4 = (unsigned char)65;
unsigned int var_9 = 561079473U;
unsigned short var_15 = (unsigned short)37455;
unsigned int var_17 = 358024287U;
int zero = 0;
unsigned short var_19 = (unsigned short)9721;
unsigned short var_20 = (unsigned short)2163;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
