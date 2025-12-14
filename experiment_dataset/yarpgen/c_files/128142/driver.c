#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22722;
short var_1 = (short)21290;
unsigned short var_3 = (unsigned short)29199;
short var_5 = (short)-31035;
int zero = 0;
short var_10 = (short)26284;
long long int var_11 = 4524028601652644613LL;
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
