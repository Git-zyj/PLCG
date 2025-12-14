#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7643698165622152047ULL;
unsigned long long int var_5 = 12245623693810787822ULL;
unsigned short var_6 = (unsigned short)9020;
short var_7 = (short)-9234;
signed char var_9 = (signed char)-59;
short var_11 = (short)9871;
unsigned int var_13 = 2089867685U;
int var_15 = 2075647529;
int zero = 0;
unsigned short var_16 = (unsigned short)63803;
unsigned short var_17 = (unsigned short)52944;
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
