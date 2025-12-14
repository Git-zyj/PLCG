#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned long long int var_2 = 13665045429407798684ULL;
unsigned int var_6 = 3058118375U;
long long int var_10 = -2138363815715285230LL;
short var_11 = (short)-27011;
int zero = 0;
int var_12 = -220092204;
unsigned long long int var_13 = 6746964897139990726ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
