#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2541424268U;
long long int var_5 = 588227420529818050LL;
unsigned char var_9 = (unsigned char)218;
int zero = 0;
unsigned short var_10 = (unsigned short)62857;
long long int var_11 = -918800667148684019LL;
signed char var_12 = (signed char)71;
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
