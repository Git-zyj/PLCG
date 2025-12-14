#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1491247265;
long long int var_11 = -149742540545260439LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 207832946U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)30344;
short var_19 = (short)-28209;
unsigned char var_20 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
