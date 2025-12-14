#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)148;
unsigned short var_9 = (unsigned short)52726;
unsigned long long int var_10 = 6870511854051137997ULL;
int zero = 0;
unsigned int var_19 = 500077100U;
_Bool var_20 = (_Bool)1;
int var_21 = 1386003332;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
