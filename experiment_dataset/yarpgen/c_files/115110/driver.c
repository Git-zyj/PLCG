#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -68036544;
int var_11 = 690653737;
int var_13 = -1262498393;
int zero = 0;
long long int var_15 = 4511287282689589698LL;
unsigned short var_16 = (unsigned short)52959;
long long int var_17 = -1774732846844043759LL;
unsigned char var_18 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
