#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)146;
int var_6 = 1592177924;
int var_7 = -1940668680;
long long int var_8 = -8383707105327949996LL;
int zero = 0;
unsigned int var_10 = 878923586U;
int var_11 = 34507836;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
