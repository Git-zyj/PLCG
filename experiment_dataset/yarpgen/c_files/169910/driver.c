#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)96;
unsigned short var_7 = (unsigned short)49240;
long long int var_10 = 6174577103409066948LL;
unsigned char var_13 = (unsigned char)15;
int zero = 0;
unsigned char var_14 = (unsigned char)244;
unsigned short var_15 = (unsigned short)10203;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
