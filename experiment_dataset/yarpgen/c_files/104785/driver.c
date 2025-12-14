#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)13;
int var_6 = 1951852021;
int var_10 = -1634435706;
short var_15 = (short)-5569;
int zero = 0;
long long int var_20 = -2836906700740355630LL;
short var_21 = (short)-27025;
short var_22 = (short)-32209;
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
