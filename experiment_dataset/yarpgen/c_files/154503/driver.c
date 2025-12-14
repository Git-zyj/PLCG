#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13322;
int var_3 = 2145827814;
long long int var_4 = -1510557339905693101LL;
unsigned short var_5 = (unsigned short)23763;
short var_8 = (short)-25084;
long long int var_10 = -5522198733730302686LL;
int var_12 = 593452166;
int zero = 0;
int var_16 = -550298048;
unsigned short var_17 = (unsigned short)59607;
long long int var_18 = -765364046141633038LL;
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
