#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4519154865120283639ULL;
long long int var_10 = -5267132971239007155LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)11637;
unsigned char var_13 = (unsigned char)35;
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
