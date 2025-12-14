#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 547888097U;
unsigned short var_2 = (unsigned short)22019;
long long int var_3 = -4021781429693062163LL;
long long int var_5 = -2620336028840197437LL;
unsigned long long int var_7 = 10751383100831322725ULL;
unsigned int var_9 = 3655306849U;
short var_10 = (short)-7622;
int zero = 0;
unsigned char var_11 = (unsigned char)173;
long long int var_12 = -4055705965615101466LL;
unsigned long long int var_13 = 17122054270053297988ULL;
unsigned short var_14 = (unsigned short)63434;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
