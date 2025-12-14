#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3529794616U;
long long int var_4 = 5935925312867405666LL;
long long int var_6 = 173015260496655379LL;
long long int var_7 = -5398849464165727639LL;
unsigned int var_10 = 3270717274U;
unsigned char var_11 = (unsigned char)225;
unsigned short var_12 = (unsigned short)13474;
int zero = 0;
unsigned int var_13 = 771617825U;
long long int var_14 = -9195300736268881839LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
