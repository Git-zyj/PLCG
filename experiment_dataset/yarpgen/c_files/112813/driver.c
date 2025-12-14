#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 448434477589327591LL;
unsigned int var_1 = 884856474U;
unsigned short var_4 = (unsigned short)2640;
unsigned long long int var_5 = 12500939511813010961ULL;
unsigned short var_7 = (unsigned short)58037;
unsigned char var_8 = (unsigned char)51;
unsigned int var_9 = 3826960227U;
unsigned int var_10 = 1688706682U;
int zero = 0;
unsigned char var_11 = (unsigned char)113;
unsigned char var_12 = (unsigned char)169;
long long int var_13 = 459920093697161246LL;
int var_14 = -556601750;
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
