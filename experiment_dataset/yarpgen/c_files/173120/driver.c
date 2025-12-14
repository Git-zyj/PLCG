#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)11;
unsigned char var_4 = (unsigned char)96;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)5457;
unsigned char var_12 = (unsigned char)57;
int zero = 0;
unsigned char var_16 = (unsigned char)204;
unsigned char var_17 = (unsigned char)15;
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
