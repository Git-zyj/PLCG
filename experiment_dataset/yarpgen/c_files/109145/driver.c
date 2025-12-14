#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39172;
long long int var_1 = -4791524629998535246LL;
short var_5 = (short)-21771;
int var_9 = -2043714107;
unsigned char var_10 = (unsigned char)23;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11345854621478767967ULL;
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
