#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6432369809148245024LL;
long long int var_13 = 5440560096738918865LL;
unsigned short var_17 = (unsigned short)17908;
int zero = 0;
unsigned long long int var_20 = 1420558218189002940ULL;
long long int var_21 = -5572075626905926445LL;
signed char var_22 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
