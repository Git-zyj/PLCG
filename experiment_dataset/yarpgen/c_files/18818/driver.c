#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)61;
unsigned short var_6 = (unsigned short)10553;
unsigned int var_8 = 3351992136U;
unsigned char var_9 = (unsigned char)243;
long long int var_11 = -949331125896518979LL;
int zero = 0;
unsigned short var_16 = (unsigned short)45200;
unsigned long long int var_17 = 9047019901705376656ULL;
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
