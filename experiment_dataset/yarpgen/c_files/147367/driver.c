#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)174;
signed char var_8 = (signed char)-63;
unsigned short var_12 = (unsigned short)17680;
short var_14 = (short)19290;
int zero = 0;
unsigned char var_16 = (unsigned char)74;
signed char var_17 = (signed char)90;
signed char var_18 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
