#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1511105876;
_Bool var_2 = (_Bool)0;
int var_3 = -241605464;
unsigned char var_6 = (unsigned char)205;
int var_8 = -1390507386;
unsigned short var_13 = (unsigned short)59030;
int zero = 0;
short var_14 = (short)-21822;
unsigned long long int var_15 = 10149535417246154872ULL;
long long int var_16 = 2120734009221768280LL;
unsigned short var_17 = (unsigned short)42569;
short var_18 = (short)14135;
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
