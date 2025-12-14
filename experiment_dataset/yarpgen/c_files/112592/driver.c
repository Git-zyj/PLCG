#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3466702142U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)56852;
unsigned char var_13 = (unsigned char)57;
unsigned char var_14 = (unsigned char)123;
int zero = 0;
unsigned short var_17 = (unsigned short)39939;
short var_18 = (short)9028;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
