#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1187736891U;
unsigned short var_4 = (unsigned short)52359;
unsigned short var_6 = (unsigned short)5882;
long long int var_7 = -3806984128354394566LL;
int zero = 0;
short var_10 = (short)-29665;
unsigned short var_11 = (unsigned short)42943;
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
