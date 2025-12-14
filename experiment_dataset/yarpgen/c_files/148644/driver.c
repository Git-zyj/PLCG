#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
int var_2 = 1109576918;
short var_6 = (short)-19141;
long long int var_9 = -1357813168670909363LL;
int var_10 = -1387391557;
unsigned int var_12 = 718665483U;
short var_13 = (short)-11928;
int var_14 = -1086740457;
int zero = 0;
unsigned int var_16 = 139559811U;
int var_17 = 966991349;
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
