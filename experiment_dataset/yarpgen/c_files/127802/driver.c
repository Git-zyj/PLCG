#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
short var_8 = (short)-9138;
unsigned char var_11 = (unsigned char)237;
int zero = 0;
int var_15 = 1210290604;
signed char var_16 = (signed char)-85;
unsigned short var_17 = (unsigned short)11288;
long long int var_18 = 5125122850578181393LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
