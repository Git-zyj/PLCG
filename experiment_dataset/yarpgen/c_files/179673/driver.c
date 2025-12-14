#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3805290554U;
long long int var_2 = -2221519229776141803LL;
unsigned char var_10 = (unsigned char)163;
long long int var_13 = -6170337616922015835LL;
int zero = 0;
unsigned char var_20 = (unsigned char)89;
unsigned short var_21 = (unsigned short)60457;
unsigned int var_22 = 2232323090U;
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
