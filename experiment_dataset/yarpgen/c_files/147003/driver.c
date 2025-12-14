#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3881941208U;
short var_4 = (short)23992;
int zero = 0;
unsigned char var_18 = (unsigned char)81;
int var_19 = -259904596;
unsigned int var_20 = 3156486695U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5475805271963407224LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
