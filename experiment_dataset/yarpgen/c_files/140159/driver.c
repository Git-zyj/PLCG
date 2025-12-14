#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7231742776973729278LL;
unsigned int var_3 = 1030118757U;
long long int var_5 = -6558092518391864913LL;
unsigned int var_9 = 252063914U;
int zero = 0;
long long int var_10 = 840402719993147900LL;
unsigned char var_11 = (unsigned char)34;
int var_12 = 1481671505;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
