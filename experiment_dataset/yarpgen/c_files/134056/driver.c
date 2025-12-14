#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6959;
unsigned short var_6 = (unsigned short)27108;
int var_7 = -1271451559;
signed char var_8 = (signed char)93;
unsigned int var_11 = 4247520242U;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -5721207549874268226LL;
unsigned short var_20 = (unsigned short)9541;
unsigned char var_21 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
