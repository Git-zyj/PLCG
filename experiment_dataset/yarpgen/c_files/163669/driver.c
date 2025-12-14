#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4041105375972620214LL;
unsigned char var_5 = (unsigned char)58;
int var_7 = -2017821809;
int zero = 0;
short var_15 = (short)14121;
signed char var_16 = (signed char)7;
unsigned char var_17 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
