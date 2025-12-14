#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
unsigned char var_2 = (unsigned char)145;
unsigned long long int var_3 = 10053680301927771626ULL;
short var_4 = (short)-28211;
unsigned int var_8 = 1388789701U;
unsigned long long int var_9 = 7936710617400141848ULL;
int zero = 0;
long long int var_14 = 2111650464974247475LL;
unsigned long long int var_15 = 16903552469492449664ULL;
short var_16 = (short)7085;
unsigned short var_17 = (unsigned short)29442;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
