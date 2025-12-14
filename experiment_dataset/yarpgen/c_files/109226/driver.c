#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
short var_1 = (short)5723;
long long int var_3 = -6836550369570895351LL;
unsigned long long int var_5 = 16749461049746165479ULL;
long long int var_9 = -1898748137621472279LL;
int zero = 0;
long long int var_10 = 5987301762602406459LL;
short var_11 = (short)-18601;
unsigned int var_12 = 651416717U;
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
