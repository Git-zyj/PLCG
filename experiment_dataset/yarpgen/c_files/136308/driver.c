#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8658394763843718900ULL;
signed char var_4 = (signed char)73;
_Bool var_6 = (_Bool)1;
unsigned char var_14 = (unsigned char)138;
unsigned long long int var_17 = 6682676588318365395ULL;
unsigned short var_18 = (unsigned short)51142;
int zero = 0;
unsigned char var_19 = (unsigned char)6;
short var_20 = (short)-7585;
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
