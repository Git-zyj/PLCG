#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1494589076;
short var_2 = (short)18138;
signed char var_3 = (signed char)-64;
short var_14 = (short)-15809;
unsigned long long int var_16 = 2832575600567902205ULL;
unsigned int var_18 = 3260340239U;
long long int var_19 = -570083584711949388LL;
int zero = 0;
long long int var_20 = -8452704777983721267LL;
unsigned int var_21 = 3270736933U;
unsigned short var_22 = (unsigned short)57601;
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
