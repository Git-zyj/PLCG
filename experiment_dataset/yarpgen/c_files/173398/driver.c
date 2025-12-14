#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2865673284098586286LL;
long long int var_1 = 8716983871880610559LL;
signed char var_4 = (signed char)104;
unsigned int var_6 = 1485115754U;
long long int var_7 = -1700066831347609614LL;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
long long int var_10 = -1097135953558481261LL;
unsigned char var_11 = (unsigned char)48;
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
