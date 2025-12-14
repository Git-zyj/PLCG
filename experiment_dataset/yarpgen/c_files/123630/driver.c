#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 972354360;
unsigned int var_3 = 4107534871U;
unsigned short var_4 = (unsigned short)63228;
unsigned int var_5 = 2687618732U;
unsigned char var_6 = (unsigned char)202;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1741915736U;
int zero = 0;
unsigned int var_16 = 3341593026U;
long long int var_17 = -7928587227600121387LL;
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
