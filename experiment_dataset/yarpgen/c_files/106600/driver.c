#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3322547526360528168LL;
short var_1 = (short)-20763;
long long int var_2 = -8361829052412583755LL;
unsigned int var_4 = 3064949723U;
long long int var_5 = 9015774160313064538LL;
long long int var_7 = 193751285536703618LL;
long long int var_13 = -8930899866331777645LL;
int zero = 0;
int var_14 = -852578304;
int var_15 = 1314941609;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
