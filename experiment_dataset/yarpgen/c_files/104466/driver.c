#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1183068230U;
unsigned char var_7 = (unsigned char)211;
unsigned short var_10 = (unsigned short)19108;
int zero = 0;
long long int var_13 = 8355975484375577666LL;
long long int var_14 = -1233021469676847033LL;
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
