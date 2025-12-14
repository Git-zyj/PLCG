#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 17143409119207890601ULL;
unsigned char var_10 = (unsigned char)210;
int zero = 0;
unsigned long long int var_11 = 12404897254645794570ULL;
unsigned short var_12 = (unsigned short)5436;
void init() {
}

void checksum() {
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
