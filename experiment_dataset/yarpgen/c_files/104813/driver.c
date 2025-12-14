#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
long long int var_2 = -7792952699893841615LL;
unsigned short var_3 = (unsigned short)31295;
unsigned int var_4 = 347754258U;
unsigned short var_9 = (unsigned short)30322;
long long int var_10 = -322169254078451368LL;
int zero = 0;
short var_13 = (short)32010;
int var_14 = -8860855;
unsigned int var_15 = 1503366607U;
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
