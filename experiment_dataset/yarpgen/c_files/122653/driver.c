#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-99;
long long int var_5 = 6381089406507367047LL;
signed char var_8 = (signed char)126;
unsigned char var_11 = (unsigned char)71;
unsigned char var_12 = (unsigned char)54;
long long int var_13 = -6021783490111699075LL;
int zero = 0;
signed char var_16 = (signed char)-81;
signed char var_17 = (signed char)-112;
long long int var_18 = -1264545031625410496LL;
unsigned short var_19 = (unsigned short)18199;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
