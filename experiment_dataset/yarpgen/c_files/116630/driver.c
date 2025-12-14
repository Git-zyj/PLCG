#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)93;
long long int var_4 = 5527343766164387142LL;
unsigned long long int var_6 = 2100003551379496574ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)44;
unsigned short var_11 = (unsigned short)31483;
unsigned short var_12 = (unsigned short)10879;
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
