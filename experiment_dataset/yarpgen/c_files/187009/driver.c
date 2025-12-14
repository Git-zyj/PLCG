#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61222;
int var_2 = 534216848;
int var_3 = -979833810;
_Bool var_9 = (_Bool)0;
int var_11 = -1161970789;
unsigned char var_12 = (unsigned char)119;
int zero = 0;
short var_13 = (short)-30714;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5588344291926783177LL;
void init() {
}

void checksum() {
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
