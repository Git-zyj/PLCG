#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7289381961331231693LL;
int var_3 = -2057593704;
long long int var_5 = 1890605586268669366LL;
unsigned short var_6 = (unsigned short)1421;
unsigned char var_7 = (unsigned char)43;
long long int var_12 = 8977824028329228925LL;
int zero = 0;
unsigned char var_16 = (unsigned char)146;
int var_17 = -634924501;
void init() {
}

void checksum() {
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
