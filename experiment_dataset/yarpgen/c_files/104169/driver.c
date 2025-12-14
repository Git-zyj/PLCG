#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -2100926009;
int var_5 = 1603714104;
signed char var_6 = (signed char)39;
unsigned char var_8 = (unsigned char)134;
unsigned long long int var_9 = 13413622249053587426ULL;
int zero = 0;
signed char var_10 = (signed char)78;
int var_11 = 1496924654;
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
