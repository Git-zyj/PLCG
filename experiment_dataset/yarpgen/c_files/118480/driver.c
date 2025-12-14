#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57690;
unsigned long long int var_5 = 1952079833137824841ULL;
unsigned short var_7 = (unsigned short)58600;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)42570;
long long int var_17 = 7411824523330054750LL;
unsigned short var_18 = (unsigned short)62153;
unsigned short var_19 = (unsigned short)64518;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
