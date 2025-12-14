#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)156;
unsigned int var_5 = 2168299486U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)28179;
long long int var_12 = -557855031235144641LL;
unsigned short var_13 = (unsigned short)64929;
int zero = 0;
unsigned short var_15 = (unsigned short)64484;
short var_16 = (short)-6956;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
