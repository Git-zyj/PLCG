#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -41461292;
long long int var_5 = -2589898271997465131LL;
unsigned char var_9 = (unsigned char)204;
long long int var_14 = -7755436974398002455LL;
signed char var_17 = (signed char)57;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
unsigned char var_20 = (unsigned char)158;
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
